/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:05:03 by rtanaka           #+#    #+#             */
/*   Updated: 2022/02/06 02:46:27 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rush_one(int lin, int col, int x, int y)
{
	if (lin == 1)
	{
		if (col == 1)
			ft_putchar('/');
		else if (col == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (lin == y)
	{
		if (col == 1)
			ft_putchar('\\');
		else if (col == x)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (col == 1 || col == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	if (x < 0 || y < 0)
		return ;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			ft_rush_one(line, column, x, y);
			column += 1;
		}
		ft_putchar('\n');
		line += 1;
	}
}
