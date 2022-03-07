/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:14:16 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 21:49:03 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef unsigned int	t_uint;

char	*ft_empty_str(void)
{
	char	*str;

	str = malloc(sizeof(char));
	*str = '\0';
	return (str);
}

t_uint	ft_strlen(char *str)
{
	t_uint	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	t_uint	from;
	t_uint	index;

	index = 0;
	from = (t_uint)ft_strlen(dest);
	while (src[index] != '\0')
	{
		dest[from + index] = src[index];
		index++;
	}
	dest[from + index] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	t_uint	total_len;
	int		index;
	char	*joined_str;

	if (size == 0)
		return (ft_empty_str());
	index = 0;
	total_len = 1 + ft_strlen(sep) * (t_uint)(size - 1);
	while (index < size)
		total_len += ft_strlen(strs[index++]);
	index = 0;
	joined_str = (char *)malloc(sizeof(char) * total_len);
	if (joined_str == NULL)
		return (NULL);
	joined_str[0] = '\0';
	while (index < size)
	{
		ft_strcat(joined_str, strs[index]);
		if (index < size - 1)
			ft_strcat(joined_str, sep);
		index++;
	}
	return (joined_str);
}
