/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:52:37 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 05:22:07 by dwesley          ###   ########.fr       */
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

void	ft_putnbr_base(int num, char *base)
{
	static int	base_len;
	static int	flag;
	int			sign;

	sign = 1;
	if (!flag)
	{
		base_len = 0;
		if (ft_is_valid_base(base) == FALSE)
			return ;
		while (base[base_len])
			base_len++;
	}
	if (num < 0)
	{
		write(STDOUT, "-", 1);
		sign = -1;
	}
	if ((num / base_len) != 0)
	{
		flag += 1;
		ft_putnbr_base(num / (base_len * sign), base);
		flag -= 1;
	}
	write(STDOUT, &base[(num % base_len) * sign], 1);
}
