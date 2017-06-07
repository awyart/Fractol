/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:54:29 by awyart            #+#    #+#             */
/*   Updated: 2017/06/06 23:39:58 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	zoom_auto(t_env *env)
{
	static int i = 0;

	env->z = env->z * 1.1;
	env->x = env->x * 1.1;
	env->y = env->y * 1.1;
	env->x += env->sizex / 20;
	env->y += env->sizey / 20;
	if (i % 2 == 0)
		env->iter += 1;
	i++;
}

int			loop_hook(t_env *env)
{
	if (env->zauto == 1)
	{
		zoom_auto(env);
		ft_start(env);
	}
	return (0);
}
