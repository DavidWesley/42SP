/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:56:52 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 02:57:53 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define STDOUT 1
#define TRUE 1
#define FALSE 0

typedef char *	t_string;

void	ft_print_str(char *str)
{
	while (*str)
		write(STDOUT, str++, 1);
	write(STDOUT, "\n", 1);
}

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

void	ft_swap_str(t_string *strA, t_string *strB)
{
	t_string	temp;

	temp = *strA;
	*strA = *strB;
	*strB = temp;
}

void	ft_sort_strings(t_string strs[], int size)
{
	int	i;
	int	is_sorted;

	is_sorted = FALSE;
	while (!is_sorted)
	{
		i = 1;
		is_sorted = TRUE;
		while (i < size)
		{
			if (ft_strcmp(strs[i - 1], strs[i]) == 1)
			{
				ft_swap_str(&strs[i -1], &strs[i]);
				is_sorted = FALSE;
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int			index;
	t_string	*args;

	args = (argv + 1);
	ft_sort_strings(args, argc - 1);
	index = 0;
	while (index < argc - 1)
		ft_print_str(args[index++]);
}
