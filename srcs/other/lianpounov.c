/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lianpounov.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 14:58:47 by awyart            #+#    #+#             */
/*   Updated: 2017/06/07 15:54:16 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		ft_put_px(t_env *env, int x, int y)
{
	if ((x > 0 && y > 0) && (x <= env->sizex && y <= env->sizey))
	{
		env->pix[(x * 4) + (y * env->sizex * 4)] = env->b;
		env->pix[(x * 4) + (y * env->sizex * 4) + 1] = env->g;
		env->pix[(x * 4) + (y * env->sizex * 4) + 2] = env->r;
	}
}

static void		ft_get_color(double a, t_env *env)
{
	if (env->color == 1)
	{
		env->r = a * env->colorvaluer;
		env->g = 255 - a * env->colorvalueg;
		env->b = 255 - a * env->colorvalueb;
		return ;
	}
	env->g = 255 - a * 7;
	env->b = 50;
	env->r = 255 - a * 15;
}

static int		ft_iter(t_env *env)
{
	int		i;
	double	res;

	i = -1;
	res = 0.3;
	while (++i < env->iter)
	{
		if (i % 8 == 0)
			res = (double)env->yn * res * (1. - res);
		if (i % 8 == 1)
			res = (double)env->xn * res * (1. - res);
		if (i % 8 == 2)
			res = (double)env->option_y / 100 * res * (1. - res);
		if (i % 8 == 3)
			res = (double)env->xn * res * (1. - res);
		if (i % 8 == 4)
			res = (double)env->yn * res * (1. - res);
		if (i % 8 == 5)
			res = (double)env->option_x / 100 * res * (1. - res);
		if (i % 8 == 6)
			res = (double)env->xn * res * (1. - res);
		if (i % 8 == 7)
			res = (double)env->yn * res * (1. - res);
	}
	return (res);
}

int				ft_liapounov(t_env *env)
{
	int x;
	int y;

	y = env->y;
	ft_create_img(env);
	while (y < env->sizey + env->y)
	{
		x = env->x;
		while (x < env->sizex + env->x)
		{
			env->xn = (double)x / env->z;
			env->yn = (double)y / env->z;
			ft_get_color(ft_iter(env), env);
			ft_put_px(env, x - env->x, y - env->y);
			x++;
		}
		y++;
	}
	return (ft_display_img(env));
}
