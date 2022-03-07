/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:48:40 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 04:20:16 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_is.h"
#include "headers/ft_puts.h"
#include "headers/ft_convert.h"

#include "operations/headers/ft_funcs.h"
#include "operations/headers/ft_validate.h"

int	ft_operation_result(int a, int b, char operator)
{
	unsigned int		index;
	static const char	operators_list[NUM_OPS] = {'+', '-', '*', '/', '%'};
	static int			(*operations[NUM_OPS])(int, int) = {
		ft_add_op,
		ft_sub_op,
		ft_mult_op,
		ft_div_op,
		ft_mod_op
	};

	index = 0;
	while (index < NUM_OPS)
	{
		if (operator == operators_list[index])
			return ((operations[index])(a, b));
		index += 1;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	operator;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		operator = argv[2][0];
		if (ft_validate_operation(b, operator))
		{
			ft_putnbr(ft_operation_result(a, b, operator));
			ft_putstr("\n");
		}
		else if ((operator == '/' || operator == '%') && b == 0)
			ft_putstr("0\n");
	}
	return (0);
}
