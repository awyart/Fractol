/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:04:18 by awyart            #+#    #+#             */
/*   Updated: 2017/06/05 17:16:54 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_init_julia(t_env *env)
{
	env->x = 0;
	env->y = 0;
	env->z = 150;
	env->b = 255;
	env->g = 255;
	env->r = 255;
	env->stop = 0;
	env->zauto = 0;
	env->sizex = SIZEX;
	env->sizey = SIZEY;
	e->option_x = SIZEX / 2;
	e->option_y = SIZEY / 2;
	env->ima = 0.5;
	env->real = 0.3;
	env->ima2 = 1.2;
	env->real2 = 0.6;
	env->iter = MAX;
	env->zoom = 1;
	env->csti = 0;
	env->cstr = 0;
	env->zr = 0;
	env->zi = 0;
	env->cr = 0;
	env->ci = 0;
}

static void	ft_init_mandel(t_env *env)
{
	env->x = 0;
	env->y = 0;
	env->z = 150;
	env->b = 255;
	env->g = 255;
	env->r = 255;
	env->stop = 0;
	env->zauto = 0;
	env->sizex = SIZEX;
	env->sizey = SIZEY;
	e->option_x = SIZEX / 2;
	e->option_y = SIZEY / 2;
	env->ima = -1.2;
	env->real = -2.1;
	env->ima2 = 1.2;
	env->real2 = 0.6;
	env->iter = MAX;
	env->zoom = 1;
	env->csti = 0;
	env->cstr = 0;
	env->zr = 0;
	env->zi = 0;
	env->cr = 0;
	env->ci = 0;
}

static void	ft_init_burning(t_env *env)
{
	env->x = 0;
	env->y = 0;
	env->z = 150;
	env->b = 255;
	env->g = 255;
	env->r = 255;
	env->stop = 0;
	env->zauto = 0;
	env->sizex = SIZEX;
	env->sizey = SIZEY;
	e->option_x = SIZEX / 2;
	e->option_y = SIZEY / 2;
	env->ima = -1.2;
	env->real = -2.1;
	env->ima2 = 1.2;
	env->real2 = 0.6;
	env->iter = MAX;
	env->zoom = 1;
	env->csti = 0;
	env->cstr = 0;
	env->zr = 0;
	env->zi = 0;
	env->cr = 0;
	env->ci = 0;
}

int		ft_init_mlx(t_env *env)
{
	if (!(env->mlx = mlx_init()))
		return (1);
	if (env->type == '1')
	{
		ft_init_julia(env);
		env->win = mlx_new_window(env->mlx, SIZEX, SIZEY, "Julia");
	}
	else if (env->type == '2')
	{
		ft_init_mandel(env);
		env->win = mlx_new_window(env->mlx, SIZEX, SIZEY, "Mandelbrot");
	}
	else if (env->type == '3')
	{
		ft_init_julia(env);
		env->win = mlx_new_window(env->mlx, SIZEX, SIZEY, "Liapounov");
	}
	else if (env->type == '3')
	{
		ft_init_burning(env);
		env->win = mlx_new_window(env->mlx, SIZEX, SIZEY, "Burningship");
	}
	else
	{
		ft_putstr_fd("un des arguments est mauvais !!!", 0);
		exit(0);
	}
	return (0);
}



