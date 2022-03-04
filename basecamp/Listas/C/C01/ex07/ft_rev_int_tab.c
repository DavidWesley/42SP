/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 03:33:09 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/04 19:30:40 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;

	index = 0;
	while (index < size / 2)
	{
		ft_swap_int(&tab[index], &tab[size - index - 1]);
		index++;
	}
}