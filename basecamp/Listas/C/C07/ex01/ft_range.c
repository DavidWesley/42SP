/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:35:28 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 21:35:49 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			index;
	int			*range;
	const int	range_len = max - min;

	if (range_len <= 0)
		return (NULL);
	range = (int *)malloc(sizeof(int) * range_len);
	if (range == NULL)
		return (NULL);
	index = 0;
	while (index < range_len)
	{
		range[index] = min + index;
		index += 1;
	}
	return (range);
}
