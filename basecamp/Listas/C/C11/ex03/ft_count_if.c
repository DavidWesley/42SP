/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:17:33 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 04:25:44 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	index;
	int	count;

	index = 0;
	while (index < length)
	{
		if (f(tab[index]) != 0)
			count++;
		index++;
	}
	return (count);
}
