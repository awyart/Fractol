/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:58:38 by awyart            #+#    #+#             */
/*   Updated: 2017/06/05 17:50:32 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_put_px(t_env *env, int x, int y)
{
	if ((x > 0 && y > 0) && (x <= SIZEX && y <= SIZEY))
	{
		env->pix[(x * 4) + (y * SIZEX * 4)] = env->b;
		env->pix[(x * 4) + (y * SIZEX * 4) + 1] = env->g;
		env->pix[(x * 4) + (y * SIZEX * 4) + 2] = env->r;
	}
}

static void	ft_get_color(int a, t_env *env)
{
	if (a == env->iter)
		ft_define_err(env)
	else
	{
		env->r = (a * 5) * 1;
		env->g = (255 - (a * 10)) * 1;
		env->b = (255 - (a * 2)) * 1;
	}
	return (c);
}

static int		ft_iter(t_env *env)
{
	int		i;
	long double tmp;

	i = -1;
	while (++i < env->iter)
	{
		tmp = env->xn;
		env->xn = env->xn * env->xn - env->yn * env->yn +
			env->cstr;
		e->mdb->zi = 2 * env->yn * tmp + env->yn + env->csti;
		if (env->xn * env->xn + env->yn * env->yn >= 4)
			return (i);
	}
	return (i);
}

int		ft_mandelbrot(t_env *env)
{
	long long x;
	long long y;

	y = env->y;
	ft_create_img(env);
	while (y < SIZEY)
	{
		x = env->x;
		while (x < SIZEX)
		{
			env->xn = 0;
			env->yn = 0;
			env->cstr = (long double)x / env->z + env->real;
			env->csti = (long double)y / env->z + env->ima;
			ft_get_color(ft_iter(env), env);
			ft_put_px(env, x - env->x, y - env->y);
			x++;
		}
		y++;
	}
	return (ft_display_img(env));
}
