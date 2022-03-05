/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:48:05 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 03:59:30 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_puts.h"

void	ft_putchar(char c)
{
	write(STDOUT, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(STDOUT, str++, 1);
}

void	ft_putnbr(int num)
{
	int	sign;

	sign = 1;
	if (num < 0)
	{
		write(STDOUT, "-", 1);
		sign = -1;
	}
	if ((num / 10) != 0)
		ft_putnbr(num / (10 * sign));
	write(STDOUT, &"0123456789"[(num % 10) * sign], 1);
}
