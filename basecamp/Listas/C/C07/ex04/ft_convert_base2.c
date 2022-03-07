/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:50:40 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 21:50:40 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_index_char(char *str, char c);
int	ft_is_valid_base(char *base);
int	ft_is_space(char c);
int	ft_num_len_mod(int num, int mod);

/// ATOI BASE ///

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

/// ITOA BASE ///

char	*ft_itoa_base(int num, char *base)
{
	int		sign;
	int		str_len;
	int		base_len;
	char	*digits;

	sign = 1;
	base_len = 0;
	while (base[base_len])
		base_len++;
	str_len = ft_num_len_mod(num, base_len);
	digits = (char *)malloc(sizeof(char) * (str_len + 1));
	if (digits == NULL)
		return (NULL);
	digits[str_len] = '\0';
	if (num < 0)
	{
		digits[0] = '-';
		sign = -1;
	}
	while (num != 0)
	{
		digits[--str_len] = base[(num % base_len) * sign];
		num /= base_len;
	}
	return (digits);
}
