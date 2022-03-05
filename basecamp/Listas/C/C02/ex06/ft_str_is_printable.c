/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 06:28:40 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/05 22:19:24 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_is_printable(char c)
{
	if (c >= 32)
		return (TRUE);
	return (FALSE);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!ft_is_printable(str[index]))
			return (FALSE);
		index++;
	}
	return (TRUE);
}
