/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:04:18 by awyart            #+#    #+#             */
/*   Updated: 2017/06/07 00:23:00 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_init_julia(t_env *env)
{
	env->sizex = SIZEX;
	env->sizey = SIZEY;
	env->x = -env->sizex / 2;
	env->y = -env->sizey / 2;
	env->z = 150;
	env->b = 255;
	env->g = 255;
	env->r = 255;
	env->stop = 0;
	env->zauto = 0;
	env->option_x = SIZEX / 2;
	env->option_y = SIZEY / 2;
	env->ima = 0.5;
	env->real = 0.3;
	env->iter = MAX;
	env->csti = 0;
	env->cstr = 0;
	env->xn = 0;
	env->yn = 0;
	env->cstr = 0;
	env->csti = 0;
	env->color = 0;
	env->colorvalueg = 1;
	env->colorvaluer = 1;
	env->colorvalueb = 1;
}

static void	ft_init_newton(t_env *env)
{
	env->sizex = SIZEX;
	env->sizey = SIZEY;
	env->x = -env->sizex / 2;
	env->y = -env->sizey / 2;
	env->z = 150;
	env->b = 255;
	env->g = 255;
	env->r = 255;
	env->stop = 0;
	env->zauto = 0;
	env->option_x = SIZEX / 2;
	env->option_y = SIZEY / 2;
	env->ima = 0;
	env->real = 0;
	env->iter = MAX;
	env->csti = 0;
	env->cstr = 0;
	env->xn = 0;
	env->yn = 0;
	env->cstr = 0;
	env->csti = 0;
	env->color = 0;
	env->colorvalueg = 1;
	env->colorvaluer = 1;
	env->colorvalueb = 1;
}
static void	ft_init_mandel(t_env *env)
{
	env->sizex = SIZEX;
	env->sizey = SIZEY;
	env->x = -env->sizex / 2;
	env->y = -env->sizey / 2;
	env->z = 150;
	env->b = 255;
	env->g = 255;
	env->r = 255;
	env->stop = 0;
	env->zauto = 0;
	env->option_x = SIZEX / 2;
	env->option_y = SIZEY / 2;
	env->ima = 0;
	env->real = -0.3;
	env->iter = MAX;
	env->csti = 0;
	env->cstr = 0;
	env->xn = 0;
	env->yn = 0;
	env->cstr = 0;
	env->csti = 0;
	env->color = 0;
	env->colorvalueg = 1;
	env->colorvaluer = 1;
	env->colorvalueb = 1;
}

static void	ft_init_burning(t_env *env)
{
	env->sizex = SIZEX;
	env->sizey = SIZEY;
	env->x = -env->sizex / 2;
	env->y = -env->sizey / 2;
	env->z = 150;
	env->b = 255;
	env->g = 255;
	env->r = 255;
	env->stop = 0;
	env->zauto = 0;
	env->option_x = SIZEX / 2;
	env->option_y = SIZEY / 2;
	env->ima = -0.01;
	env->real = -1.75;
	env->iter = MAX;
	env->csti = 0;
	env->cstr = 0;
	env->xn = 0;
	env->yn = 0;
	env->cstr = 0;
	env->csti = 0;
	env->color = 0;
	env->colorvalueg = 1;
	env->colorvaluer = 1;
	env->colorvalueb = 1;
}

int			ft_init_mlx(t_env *env)
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
		ft_init_burning(env);
		env->win = mlx_new_window(env->mlx, SIZEX, SIZEY, "Burningship");
	}
	else if (env->type == '4')
	{
		ft_init_newton(env);
		env->win = mlx_new_window(env->mlx, SIZEX, SIZEY, "fractale de Newton");
	}
	else
		err_arg();
	return (0);
}
