/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:11:10 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/05 16:05:28 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (TRUE);
	return (FALSE);
}

int	ft_is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (TRUE);
	return (FALSE);
}

int	ft_is_alphanumeric(char c)
{
	if ('0' <= c && c <= '9')
		return (TRUE);
	if ('A' <= c && c <= 'Z')
		return (TRUE);
	if ('a' <= c && c <= 'z')
		return (TRUE);
	return (FALSE);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	index;
	int				is_word;

	index = 0;
	is_word = FALSE;
	while (str[index])
	{
		if (ft_is_alphanumeric(str[index]))
		{
			if (is_word == FALSE)
			{
				if (ft_is_lowercase(str[index]))
					str[index] -= 32;
				is_word = TRUE;
			}
			else
				if (ft_is_uppercase(str[index]))
					str[index] += 32;
		}
		else
			is_word = FALSE;
		index++;
	}
	return (str);
}
