/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:24:05 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 04:26:05 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	index;

	index = 1;
	while (index < length)
	{
		if (f(tab[index - 1], tab[index]) > 0)
			return (FALSE);
		index++;
	}
	return (TRUE);
}
