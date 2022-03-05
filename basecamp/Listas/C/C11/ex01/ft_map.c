/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 02:56:57 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/17 04:32:57 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	index;
	int	*mapped_tab;

	index = 0;
	mapped_tab = (int *)malloc(sizeof(int) * length);
	while (index < length)
	{
		mapped_tab[index] = f(tab[index]);
		index++;
	}
	return (mapped_tab);
}
