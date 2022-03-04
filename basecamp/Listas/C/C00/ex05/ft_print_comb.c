/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 19:19:32 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/04 19:19:36 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '9')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '9')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				write(STDOUT, digits, 3);
				if (digits[0] != '7')
					write(1, ", ", 2);
				digits[2] += 1;
			}
			digits[1] += 1;
		}
		digits[0] += 1;
	}
}
