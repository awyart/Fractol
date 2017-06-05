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
void	ft_get_color1(t_env *env, double z)
{
	if (z <= INF)
		ft_define_1(env, z, INF);
	else
	{
		ft_define_err(env);
	}
}

static void ft_color_julia(t_env *env, int x, int y)
{
	double 	tmp;
	int 	n;
	double	div;
	double 	xn;
	double	yn;


	xn = 0.003 * (double)x / env->zoom;
	yn = 0.003 * (double)y / env->zoom;
	n = 0;
	while (++n <= env->iter)
	{
		tmp = xn;
		xn = (xn * xn - yn * yn + env->real);
		yn = (2 * tmp * yn) + env->ima;
		if (abs((int)(xn + yn)) > INF)
			break ;
	}
	if (n == env->iter)
	{
		ft_define_err(env);
	}
	else
	{
		div = sqrt(xn * xn + yn * yn);
		ft_get_color1(env, div);
	}
}

int		ft_mandelbrot(t_env *env)
{
	int x;
	int y;

	x = 0;
	y = 0;
	ft_create_img(env);
	while (y < SIZEY)
	{
		while (x < SIZEX)
		{
			ft_color_julia(env, (x - SIZEX/2), (y - SIZEY / 2));
			ft_put_px(env, x, y);
			x++;
		}
		x = 0;
		y++;
	}
	return (ft_display_img(env));
}
