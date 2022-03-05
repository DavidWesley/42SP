/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 06:57:02 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/05 16:08:39 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (TRUE);
	return (FALSE);
}

char	*ft_strlowcase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index])
	{
		if (ft_is_uppercase(str[index]))
			str[index] += 32;
		index++;
	}
	return (str);
}
