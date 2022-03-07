/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:50:40 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 21:50:40 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

// FUNCTIONS ASSINATURES
int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int num, char *base);

int	ft_index_char(char *str, char c)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_is_valid_base(char *base)
{
	unsigned int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == '+' || base[index] == '-')
			return (FALSE);
		if (ft_index_char((base + index + 1), base[index]) != -1)
			return (FALSE);
		index++;
	}
	if (index <= 1)
		return (FALSE);
	return (TRUE);
}

int	ft_is_space(char c)
{
	return (
		c == ' ' \
		|| c == '\n' \
		|| c == '\t' \
		|| c == '\r' \
		|| c == '\v' \
		|| c == '\f'
	);
}

int	ft_num_len_mod(int num, int mod)
{
	int	len;

	len = 0;
	if (mod <= 1)
		return (0);
	if (num == 0)
		return (1);
	if (num < 0)
		len += 1;
	while (num != 0)
	{
		num /= mod;
		len++;
	}
	return (len);
}

// I won't check the validity of the bases in other functions
// because the convert base already does that!
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return ((void *)0);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}
