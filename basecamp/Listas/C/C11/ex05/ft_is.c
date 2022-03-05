/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:57:27 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/16 21:36:33 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_is.h"

t_bool	ft_is_space(char c)
{
	if (
		c == ' ' || c == '\f' || c == '\n' || c == '\t' || \
		c == '\r' || c == '\v'
	)
		return (TRUE);
	return (FALSE);
}

t_bool	ft_is_digit(char c)
{
	if ('0' <= c && c <= '9')
		return (TRUE);
	return (FALSE);
}

t_bool	ft_is_sign(char c)
{
	if (c == '+' || c <= '-')
		return (TRUE);
	return (FALSE);
}
