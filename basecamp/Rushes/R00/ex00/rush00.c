/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <@student.42sp.org.br>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:36:46 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/04 05:09:25 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rush_zero(int line, int column, int x, int y)
{
	if (line == 1 || line == y)
	{
		if (column == 1 || column == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (column == 1 || column == x)
			ft_putchar('|');
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
			ft_rush_zero(line, column, x, y);
			column += 1;
		}
		ft_putchar('\n');
		line += 1;
	}
}
