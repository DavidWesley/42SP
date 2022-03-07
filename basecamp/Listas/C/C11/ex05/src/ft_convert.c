/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:32:05 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 04:18:44 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_is.h"
#include "headers/ft_convert.h"

int	ft_atoi(char *str)
{
	unsigned int	index;
	int				sign;
	int				number;

	number = 0;
	index = 0;
	sign = 1;
	while (ft_is_space(str[index]))
		index++;
	while (ft_is_sign(str[index]))
		if (str[index++] == '-')
			sign *= -1;
	while ('0' <= str[index] && str[index] <= '9')
		number = (number * 10) + (str[index++] - '0') * (sign);
	return (number);
}
