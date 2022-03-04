/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:19:11 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/04 19:19:11 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1
#define PAD_LEN 2

typedef unsigned int	t_uint;

t_uint	ft_num_len_mod(t_uint num, t_uint mod)
{
	t_uint	len;

	len = 0;
	if (mod <= 1)
		return (0);
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= mod;
		len++;
	}
	return (len);
}

// ADAPTED PUTNBR FUNCTION
// JUST TO UNSIGNED NUMBERS
void	ft_putnbr_with_pad(t_uint num, t_uint pad_len, char pad)
{
	t_uint	num_len;

	if (pad_len != 0)
	{
		num_len = ft_num_len_mod(num, 10);
		while (num_len++ < pad_len)
			write(STDOUT, &pad, 1);
	}
	if (num > 9)
		ft_putnbr_with_pad(num / 10, 0, pad);
	write(STDOUT, &"0123456789"[num % 10], 1);
}

void	ft_print_comb2(void)
{
	t_uint	n1;
	t_uint	n2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_putnbr_with_pad(n1, PAD_LEN, '0');
			write(STDOUT, " ", 1);
			ft_putnbr_with_pad(n2, PAD_LEN, '0');
			if ((n1 != 98) || (n2 != 99))
				write(STDOUT, ", ", 2);
			n2 += 1;
		}
		n1 += 1;
	}
}
