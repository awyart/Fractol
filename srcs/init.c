/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:04:18 by awyart            #+#    #+#             */
/*   Updated: 2017/06/02 14:55:40 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_init_mlx(t_env *env)
{
	if (!(env->mlx = mlx_init()))
		return (1);
	if (env->type == 1)
		env->win = mlx_new_window(env->mlx, SIZEX, SIZEY, "Julia");
	else if (env->type == 2)
		env->win = mlx_new_window(env->mlx, SIZEX, SIZEY, "Mandelbrot");
	else if (env->type == 3)
		env->win = mlx_new_window(env->mlx, SIZEX, SIZEY, "Liapounov");
	else
	{
		ft_putstr_fd("AHHHHH!", 0);
		exit(0);
	}

	return (0);
}



