/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:40:13 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 03:36:04 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include "ft_stock_str.h"

#define STDOUT 1

void	ft_putchar(char c)
{
	write(STDOUT, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(str++);
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

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned int	index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		ft_putchar('\n');
		ft_putnbr(par[index].size);
		ft_putchar('\n');
		ft_putstr(par[index].copy);
		ft_putchar('\n');
		index += 1;
	}
}
