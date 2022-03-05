/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:26:40 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 05:08:45 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

#define TRUE 1
#define FALSE 0

int	ft_index_char(char *str, char c)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_is_valid_base(char *base)
{
	unsigned int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == '+' || base[index] == '-')
			return (FALSE);
		if (ft_index_char((base + index + 1), base[index]) != -1)
			return (FALSE);
		index++;
	}
	if (index <= 1)
		return (FALSE);
	return (TRUE);
}

int	ft_is_space(char c)
{
	return (
		c == ' ' \
		|| c == '\f' \
		|| c == '\n' \
		|| c == '\t' \
		|| c == '\r' \
		|| c == '\v'
	);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	index;
	int	number;
	int	base_len;

	sign = 1;
	index = 0;
	number = 0;
	base_len = 0;
	if (ft_is_valid_base(base) == FALSE)
		return (0);
	while (base[base_len])
		base_len++;
	while (ft_is_space(str[index]))
		index++;
	while (str[index] == '-' || str[index] == '+')
		if (str[index++] == '-')
			sign *= -1;
	while (ft_index_char(base, str[index]) != -1)
		number = number * base_len + ft_index_char(base, str[index++]) * sign;
	return (number);
}
