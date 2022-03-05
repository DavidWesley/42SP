/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:37:59 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 20:29:41 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1
#define TRUE 1
#define FALSE 0

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// 32 - 126
int	ft_is_printable(char c)
{
	if (' ' <= c && c <= '~')
		return (TRUE);
	return (FALSE);
}

unsigned int	ft_num_len_mod(unsigned int num, unsigned int mod)
{
	unsigned int	len;

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

void	ft_putchex_with_pad(char c, unsigned int pad_len)
{
	unsigned int		hex_len;
	const unsigned char	uc = (unsigned char)c;

	if (pad_len > 0)
	{
		hex_len = ft_num_len_mod(uc, 16);
		while (hex_len++ < pad_len)
			ft_putchar('0');
	}
	if (uc >= 16)
		ft_putchex_with_pad(uc / 16, 0);
	ft_putchar("0123456789abcdef"[uc % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (ft_is_printable(str[index]) == FALSE)
		{
			ft_putchar('\\');
			ft_putchex_with_pad(str[index], 2);
		}
		else
			ft_putchar(str[index]);
		index += 1;
	}
}
