/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtanaka <rtanaka@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:00:19 by desilva           #+#    #+#             */
/*   Updated: 2022/02/06 01:18:21 by rtanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rush_thi(int line, int column, int x, int y)
{
	if (line == 1 || line == y)
	{
		if (column == 1)
			ft_putchar('A');
		else if (column == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (column == 1 || column == x)
			ft_putchar('B');
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
			ft_rush_thi(line, column, x, y);
			column += 1;
		}
		ft_putchar('\n');
		line += 1;
	}
}
