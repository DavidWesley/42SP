/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:35:28 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 21:41:44 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			index;
	const int	range_len = max - min;

	if (range_len <= 0)
	{
		(*range) = NULL;
		return (0);
	}
	(*range) = (int *)malloc(range_len * sizeof(int));
	if ((*range) == NULL)
		return (-1);
	index = 0;
	while (index < range_len)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (range_len);
}
