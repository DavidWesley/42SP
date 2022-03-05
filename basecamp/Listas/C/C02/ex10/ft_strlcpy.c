/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:17:42 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 20:27:43 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	length;

	length = 0;
	index = 0;
	while (src[length] != '\0')
		length++;
	while (src[index] != '\0' && index < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (length);
}
