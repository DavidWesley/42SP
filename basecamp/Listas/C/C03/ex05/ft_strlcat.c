/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:28:41 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 17:14:49 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	index;

	d_len = 0;
	s_len = 0;
	index = 0;
	while (src[s_len] != '\0')
		s_len++;
	if (size == 0)
		return (s_len);
	while (dest[d_len] != '\0')
		d_len++;
	while (src[index] != '\0' && index < size - d_len - 1)
	{
		dest[d_len + index] = src[index];
		index++;
	}
	dest[s_len + index] = '\0';
	return (d_len + s_len);
}
