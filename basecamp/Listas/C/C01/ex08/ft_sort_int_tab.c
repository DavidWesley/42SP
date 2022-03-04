/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 03:58:16 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/04 19:36:50 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

void	ft_swap_int(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	is_sorted;

	is_sorted = FALSE;
	while (!is_sorted)
	{
		index = 1;
		is_sorted = TRUE;
		while (index < size)
		{
			if (tab[index - 1] > tab[index])
			{
				ft_swap_int(&tab[index - 1], &tab[index]);
				is_sorted = FALSE;
			}
			index += 1;
		}
	}
}
