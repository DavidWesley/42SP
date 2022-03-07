/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:37:32 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 04:00:10 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_is.h"
#include "../headers/ft_puts.h"
#include "headers/ft_validate.h"
#include "headers/ft_funcs.h"

t_bool	ft_validate_operation(int b, char operator)
{
	unsigned int		index;
	static const char	operators_list[NUM_OPS] = {'+', '-', '*', '/', '%'};

	if (operator == '/' && b == 0)
	{
		ft_putstr(DIV_ZERO_ERROR_MSG);
		return (FALSE);
	}
	else if (operator == '%' && b == 0)
	{
		ft_putstr(MOD_ZERO_ERROR_MSG);
		return (FALSE);
	}
	index = 0;
	while (index < NUM_OPS)
		if (operator == operators_list[index++])
			return (TRUE);
	return (FALSE);
}
