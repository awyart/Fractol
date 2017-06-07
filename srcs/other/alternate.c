/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alternate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 23:45:44 by awyart            #+#    #+#             */
/*   Updated: 2017/06/07 18:33:39 by awyart           ###   ########.fr       */
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

static void		ft_get_color(int a, t_env *env)
{
	if (a == env->iter)
		ft_define_err(env);
	else
	{
		if (env->color == 1)
		{
			env->r = a * env->colorvaluer;
			env->g = 255 - a * env->colorvalueg;
			env->b = 255 - a * env->colorvalueb;
			return ;
		}
		env->g = (a * 7);
		env->b = (125 - (a * 7));
		env->r = (a * 3);
	}
}

static int		ft_iter(t_env *env)
{
	int		i;
	double	tmp;
	double	tmpx;

	i = -1;
	while (++i < env->iter)
	{
		tmp = env->xn;
		tmpx = (env->xn * env->xn) + (env->yn * env->yn);
		env->xn = 2 / 3 * env->xn + ((env->xn * env->xn) - (env->yn * env->yn))
	/ (3 * (tmpx * tmpx)) + 0.1 * (double)env->sizex / ((double)env->option_x);
		env->yn = 2 / 3 * env->yn - 2 * tmp * env->yn / (3 * (tmpx * tmpx))
		+ 0.1 * (double)env->sizey / ((double)env->option_y);
		if (env->xn * env->xn + env->yn * env->yn >= 4)
			return (i);
	}
	return (i);
}

int				ft_alternate(t_env *env)
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
