/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:07:19 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 17:16:52 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	from;
	unsigned int	index;

	from = 0;
	index = 0;
	while (dest[from])
		from++;
	while (src[index] != '\0')
	{
		dest[from + index] = src[index];
		index++;
	}
	dest[from + index] = '\0';
	return (dest);
}
