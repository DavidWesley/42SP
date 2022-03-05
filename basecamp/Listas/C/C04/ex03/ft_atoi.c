/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 04:37:56 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 05:04:25 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (
		c == ' ' \
		|| c == '\f' \
		|| c == '\n' \
		|| c == '\t' \
		|| c == '\r' \
		|| c == '\v' \
	);
}

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
	while (str[index] == '+' || str[index] == '-')
		if (str[index++] == '-')
			sign *= -1;
	while ('0' <= str[index] && str[index] <= '9')
		number = (number * 10) + (str[index++] - '0') * (sign);
	return (number);
}
