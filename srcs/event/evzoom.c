/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evzoom.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 16:05:14 by awyart            #+#    #+#             */
/*   Updated: 2017/06/06 23:36:24 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_zoom_in(t_env *env)
{
	static int i = 0;

	env->z = env->z * 1.1;
	env->y = env->y * 1.1;
	env->x = env->x * 1.1;
	env->x += env->sizex / 20;
	env->y += env->sizey / 20;
	if (i % 200 == 0)
		env->iter += 1;
	i++;
	ft_start(env);
}

void	ft_zoom_out(t_env *env)
{
	static int i = 0;

	if (env->z / 1.1 < 10)
		return ;
	env->z = env->z / 1.1;
	env->x = env->x / 1.1;
	env->y = env->y / 1.1;
	env->x -= env->sizex / 20;
	env->y -= env->sizey / 20;
	if (i % 200 == 0)
		env->iter -= 1;
	i++;
	ft_start(env);
}

void	ft_activate_zauto(t_env *env)
{
	env->zauto = !env->zauto;
}
