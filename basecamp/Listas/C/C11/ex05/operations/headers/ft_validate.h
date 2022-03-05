/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:31:45 by dwesley           #+#    #+#             */
/*   Updated: 2022/02/16 23:20:14 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VALIDATE_H
# define FT_VALIDATE_H

# define DIV_ZERO_ERROR_MSG "Stop : division by zero"
# define MOD_ZERO_ERROR_MSG "Stop : modulo by zero"

# include "../../headers/ft_is.h"

t_bool	ft_validate_operation(int b, char operator);

#endif