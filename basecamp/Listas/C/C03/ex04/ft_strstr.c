/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:35:04 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 16:47:29 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] && to_find[j] && (str[i + j] == to_find[j]))
			j += 1;
		if (to_find[j] == '\0')
			return (str + i);
		i += 1;
	}
	return ((char *)0);
}
