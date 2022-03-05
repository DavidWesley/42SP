/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 03:29:17 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 04:27:46 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	if (*(unsigned char *)s1 < *(unsigned char *)s2)
		return (-1);
	else
		return (1);
}

void	ft_swap_str(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[index - 1], tab[index]) > 0)
			{
				ft_swap_str(&tab[index - 1], &tab[index]);
				is_sorted = FALSE;
			}
			index += 1;
		}
	}
}
