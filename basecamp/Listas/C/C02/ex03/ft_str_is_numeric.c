/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 06:07:56 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/05 16:15:41 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (TRUE);
	return (FALSE);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!ft_is_numeric(str[index]))
			return (FALSE);
		index++;
	}
	return (TRUE);
}
