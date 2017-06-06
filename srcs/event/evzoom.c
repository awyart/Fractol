/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evzoom.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 16:05:14 by awyart            #+#    #+#             */
/*   Updated: 2017/06/05 17:42:49 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_zoom_in(t_env *env)
{
	env->x += env->sizex / 12;
	env->y += env->sizey / 12;
	env->z = env->z * 1.2;
	env->x = env->x * 1.2;
	env->y = env->y * 1.2;
}

void	ft_zoom_out(t_env *env)
{
	if (env->z / 1.2 < 10)
		return ;
	env->x -= env->sizex / 12;
	env->y -= env->sizey / 12;
	env->z = env->z / 1.2;
	env->x = env->x / 1.2;
	env->y = env->y / 1.2;
}

void ft_activate_zauto(t_env *env)
{
	env->zauto = !e->zauto;
}