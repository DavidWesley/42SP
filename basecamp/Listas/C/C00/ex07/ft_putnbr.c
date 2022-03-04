/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:19:52 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/04 19:19:52 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT, &c, 1);
}

void	ft_putnbr(int num)
{
	int	sign;

	sign = 1;
	if (num < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if (num / 10 != 0)
		ft_putnbr(num / (10 * sign));
	ft_putchar((num % 10) * sign + '0');
}
// Alternative printing decimanl number logical
// ft_putchar("0123456789"[(num % 10) * sign]);