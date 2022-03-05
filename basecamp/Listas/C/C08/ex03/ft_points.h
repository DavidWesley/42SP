/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_points.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwesley <dwesley@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:17:58 by dwesley           #+#    #+#             */
/*   Updated: 2022/03/05 03:29:08 by dwesley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINTS_H
# define FT_POINTS_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif