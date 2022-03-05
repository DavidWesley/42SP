/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:22:57 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 03:24:45 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*duplicate_str;

	length = ft_strlen(src);
	duplicate_str = (char *)malloc(sizeof(char) * (length + 1));
	if (duplicate_str == NULL)
		return (NULL);
	duplicate_str[length] = '\0';
	while (length--)
		duplicate_str[length] = src[length];
	return (duplicate_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*list;

	index = 0;
	list = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (list == NULL)
		return (NULL);
	while (index < ac)
	{
		list[index].str = av[index];
		list[index].size = ft_strlen(av[index]);
		list[index].copy = ft_strdup(av[index]);
		index += 1;
	}
	list[index] = (t_stock_str){0, 0, 0};
	return (list);
}
