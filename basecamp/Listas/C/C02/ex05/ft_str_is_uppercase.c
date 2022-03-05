/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 06:24:18 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/05 22:14:53 by dwesley          ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!ft_is_uppercase(str[index]))
			return (FALSE);
		index++;
	}
	return (TRUE);
}
