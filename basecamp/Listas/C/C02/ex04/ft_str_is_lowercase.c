/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 06:18:03 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/05 16:15:34 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (TRUE);
	return (FALSE);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!ft_is_lowercase(str[index]))
			return (FALSE);
		index++;
	}
	return (TRUE);
}
