/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:36:55 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/17 00:15:05 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_funcs.h"

// Our program should accept and print the result
// for the following operators:
// "+" -> a "+" b
// "-" -> a "-" b
// "/" -> a "/" b
// "*" -> a "*" b
// "%" -> a "%" b

int	ft_add_op(int a, int b)
{
	return (a + b);
}

int	ft_sub_op(int a, int b)
{
	return (a - b);
}

int	ft_mult_op(int a, int b)
{
	return (a * b);
}

int	ft_div_op(int a, int b)
{
	return (a / b);
}

int	ft_mod_op(int a, int b)
{
	return (a % b);
}
