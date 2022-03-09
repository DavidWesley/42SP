/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:54:53 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/08 01:21:04 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef unsigned int		t_uint;
typedef unsigned short int	t_bool;

int	ft_index_char(const char *str, char c)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

t_uint	ft_count_segmenters(const char *str, const char *charset)
{
	t_uint	counter;
	t_bool	started_segment;

	counter = 0;
	started_segment = FALSE;
	while (*str != '\0')
	{
		if (ft_index_char(charset, *str) == -1)
		{
			if (started_segment == FALSE)
			{
				started_segment = TRUE;
				counter += 1;
			}
		}
		else if (started_segment == TRUE)
			started_segment = FALSE;
		str += 1;
	}
	return (counter);
}

void	ft_allocate_memo_from_segmenters(
	const char *str,
	const char *charset,
	char **list
)
{
	t_uint	token_len;
	t_bool	started_segment;

	token_len = 1;
	started_segment = FALSE;
	while (*str != '\0')
	{
		if (*(str + 1) == '\0' || ft_index_char(charset, *str) != -1)
		{
			if (started_segment == TRUE)
			{
				*(list++) = (char *)malloc(sizeof(char) * token_len);
				started_segment = FALSE;
			}
			token_len = 0;
		}
		else if (started_segment == FALSE)
			started_segment = TRUE;
		token_len += 1;
		str++;
	}
}

void	ft_fill_allocatted_memo_from_segmenters(
	const char *str,
	const char *charset,
	char **list
)
{
	char	*temp;
	t_bool	started_segment;

	started_segment = FALSE;
	temp = (*list++);
	while (*str != '\0')
	{
		if (ft_index_char(charset, *str) != -1)
		{
			if (started_segment == TRUE)
			{
				*temp = '\0';
				temp = (*list++);
			}
			started_segment = FALSE;
		}
		else
		{
			*temp++ = *str;
			started_segment = TRUE;
		}
		str += 1;
	}
	(*list) = 0;
}

char	**ft_split(char *str, char *charset)
{
	char			**list;
	const t_uint	size = 1 + ft_count_segmenters(str, charset);

	list = (char **)malloc(sizeof(char *) * size);
	if (list == NULL)
		return (NULL);
	ft_allocate_memo_from_segmenters(str, charset, list);
	ft_fill_allocatted_memo_from_segmenters(str, charset, list);
	return (list);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**a = ft_split("oi brazilia", "a");
// 	while (*a != 0)
// 		printf("RESULT: %s\n", *a++);
// 	printf("RESULT: %s\n", *a);
// 	return (0);
// }
