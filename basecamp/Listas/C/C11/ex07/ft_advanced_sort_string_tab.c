/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 04:12:37 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 04:24:22 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

void	ft_swap_str(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	size;
	int	index;
	int	is_sorted;

	size = 0;
	is_sorted = FALSE;
	while (tab[size])
		size++;
	while (!is_sorted)
	{
		index = 1;
		is_sorted = TRUE;
		while (index < size)
		{
			if (cmp(tab[index - 1], tab[index]) > 0)
			{
				ft_swap_str(&tab[index - 1], &tab[index]);
				is_sorted = FALSE;
			}
			index += 1;
		}
	}
}
