/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:54:34 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/16 23:10:08 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H

# define INVALID FALSE
# define TRUE (unsigned short int)1
# define FALSE (unsigned short int)0

typedef unsigned short int	t_bool;

t_bool	ft_is_space(char c);
t_bool	ft_is_digit(char c);
t_bool	ft_is_sign(char c);

#endif