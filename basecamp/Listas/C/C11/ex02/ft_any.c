/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:30:24 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/07 20:09:11 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_any(char **tab, int (*f)(char*))
{
	unsigned int	index;

	index = 0;
	while (tab[index])
		if (f(tab[index++]) != 0)
			return (TRUE);
	return (FALSE);
}
