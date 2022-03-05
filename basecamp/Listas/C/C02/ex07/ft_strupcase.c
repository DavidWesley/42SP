/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 06:31:42 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/05 16:14:33 by dwesley          ###   ########.fr       */
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

char	*ft_strupcase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		if (ft_is_lowercase(str[index]))
			str[index] -= 32;
		index++;
	}
	return (str);
}
