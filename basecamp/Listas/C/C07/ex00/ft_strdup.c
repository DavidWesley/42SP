/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:21:50 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 21:27:30 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	char	*duplicate_str;

	length = 0;
	while (src[length])
		length++;
	duplicate_str = (char *)malloc(sizeof(char) * (length + 1));
	if (duplicate_str == NULL)
		return (NULL);
	duplicate_str[length] = '\0';
	while (length--)
		duplicate_str[length] = src[length];
	return (duplicate_str);
}
