/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:15:14 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 16:49:32 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	from;
	unsigned int	index;

	from = 0;
	index = 0;
	while (dest[from])
		from++;
	while (src[index] != '\0' && index < nb)
	{
		dest[from + index] = src[index];
		index++;
	}
	dest[from + index] = '\0';
	return (dest);
}
