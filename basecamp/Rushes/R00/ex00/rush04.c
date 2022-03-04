/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtanaka <rtanaka@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:30:01 by desilva           #+#    #+#             */
/*   Updated: 2022/02/06 01:18:07 by rtanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rush_quad(int line, int col, int x, int y)
{
	if (line == 1)
	{
		if (col == 1)
			ft_putchar('A');
		else if (col == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (line == y)
	{
		if (col == 1)
			ft_putchar('C');
		else if (col == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (col == 1 || col == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	column;
	int	line;

	line = 1;
	if (x < 0 || y < 0)
		return ;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			ft_rush_quad(line, column, x, y);
			column++;
		}
		line++;
		ft_putchar('\n');
	}
}
