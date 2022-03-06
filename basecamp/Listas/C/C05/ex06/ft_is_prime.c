/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 04:01:10 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 21:16:58 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		return (FALSE);
	if (nb == 2)
		return (TRUE);
	if (nb % 2 == 0)
		return (FALSE);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (FALSE);
		i += 2;
	}
	return (TRUE);
}
