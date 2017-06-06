/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 23:56:42 by awyart            #+#    #+#             */
/*   Updated: 2017/06/07 00:32:01 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_setup_newton(t_env *env)
{
	env->stop = 1;
	env->z = 150;
	env->y = - env->sizey / 2;
	env->x = - env->sizex / 2;
	env->option_y = 74;
	env->option_x = 500;
	env->iter = 84;
	ft_start(env);
}

void	ft_setup_julia(t_env *env)
{
	env->stop = 1;
	env->z = 250;
	env->y = - 125 - env->sizey / 2;
	env->x = - 75 - env->sizex / 2;
	env->option_y = 264;
	env->option_x = 504;
	env->iter = 84;
	ft_start(env);
}

void	ft_setup_boat(t_env *env)
{
	env->stop = 1;
	env->z = 4490;
	env->y = -25 - env->sizey / 2;
	env->x = - env->sizex / 2;
	env->option_y = 341;
	env->option_x = 504;
	env->iter = 84;
	ft_start(env);
}
