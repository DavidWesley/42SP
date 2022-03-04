/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:20:30 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/04 19:20:30 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 10
#define STDOUT 1

#define TRUE 1
#define FALSE 0

void	ft_update_combn_buffer(char buffer[SIZE], int n, int from)
{
	if (from < 0 || n < 0 || from >= n || n >= SIZE)
		return ;
	if (buffer[from] == '0' + SIZE - (n - from))
	{
		ft_update_combn_buffer(buffer, n, from - 1);
		buffer[from] = buffer[from - 1] + 1;
	}
	else
		buffer[from] += 1;
}

int	ft_is_finished_combn(char buffer[SIZE], int n)
{
	int	j;

	j = 0;
	while (j < n)
	{
		if (buffer[j] < '0' + SIZE - n - j)
			return (FALSE);
		j++;
	}
	return (TRUE);
}

void	ft_print_combn(int n)
{
	int		i;
	char	buffer[SIZE];

	i = 0;
	while (i < n)
	{
		buffer[i] = '0' + i;
		i++;
	}
	write(STDOUT, buffer, n);
	while (ft_is_finished_combn(buffer, n) == FALSE)
	{
		write(STDOUT, ", ", 2);
		ft_update_combn_buffer(buffer, n, n - 1);
		write(STDOUT, buffer, n);
	}
}
