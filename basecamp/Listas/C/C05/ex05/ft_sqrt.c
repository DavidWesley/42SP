/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 03:56:15 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 21:16:40 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MAX_INT_ROOT 46340

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while ((sqrt * sqrt) < nb && sqrt <= MAX_INT_ROOT)
		sqrt++;
	if ((sqrt * sqrt) == nb)
		return (sqrt);
	return (0);
}
