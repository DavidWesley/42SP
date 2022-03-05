/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:41:42 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 02:58:06 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_print_str(char *str)
{
	while (*str)
		write(STDOUT, str++, 1);
	write(STDOUT, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	index;

	index = argc - 1;
	while (index > 0)
		ft_print_str(argv[index--]);
}
