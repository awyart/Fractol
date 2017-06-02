/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 13:59:47 by awyart            #+#    #+#             */
/*   Updated: 2017/06/02 14:58:20 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_define1_ev(t_ev ev[NBEVE])
{
	ev[0].key =
}

static void	ft_define2_ev(t_ev ev[NBEVE])
{
	ev[0].f = 
}

int			my_key_func(int keycode, t_env *env)
{
	int		i;
	t_ev	g_ev[NBEVE];

	i = -1;
	ft_define1_ev(g_ev);
	ft_define2_ev(g_ev);
	while (++i < NBEVE)
	{
		if (keycode == g_ev[i].key)
		{
			g_ev[i].f(env);
			break ;
		}
	}
	return (0);
}

int		ft_start(t_env *env)
{
	if (env->type == 1)
		ft_julia(env);
	else if (env->type == 2)
		ft_mandelbrot(env);
	else if (env->type == 3)
		ft_liapounov(env);
	return (0);
}
int			main(int ac, char **av)
{
	t_env	*env;

	if (ac == 1)
	{
		ft_putstr_fd("usage :\n1: fractale Julia\n2: fractale Mandelbrot\n3:
		fractale Liapounov\n4: burning ship fractal\n5: fractale de newton\n", 0);
		return (0);
	}
	if (!(env = (t_env *)malloc(sizeof(t_env)))
		return (0);
	env->type = av[1][0];
	if (ft_init_mlx(env) == 1)
		return (0);
	ft_start(env);
	mlx_key_hook(env->win, my_key_func, env);
	mlx_expose_hook(env->win, &ft_start, env);
	mlx_loop(env->mlx);
	return (0);
}