/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:38:45 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 04:50:36 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putnbr(int num)
{
	int	sign;

	sign = 1;
	if (num < 0)
	{
		write(STDOUT, "-", 1);
		sign = -1;
	}
	if (num / 10 != 0)
		ft_putnbr(num / (10 * sign));
	write(STDOUT, &"0123456789"[(num % 10) * sign], 1);
}
