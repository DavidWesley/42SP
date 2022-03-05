/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 05:53:33 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 19:41:39 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_is_alpha(char c)
{
	if ('A' <= c && c <= 'Z')
		return (TRUE);
	if ('a' <= c && c <= 'z')
		return (TRUE);
	return (FALSE);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!ft_is_alpha(str[index]))
			return (FALSE);
		index++;
	}
	return (TRUE);
}
