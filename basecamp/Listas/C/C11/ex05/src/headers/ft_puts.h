/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:45:59 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/16 19:51:15 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTS_H
# define  FT_PUTS_H

# define STDOUT 1
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int num);

#endif