/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:59:05 by awyart            #+#    #+#             */
/*   Updated: 2017/06/06 23:36:57 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_reset(t_env *env)
{
	env->x = -SIZEX / 2;
	env->y = -SIZEY / 2;
	env->z = 150;
	env->option_x = SIZEX / 2;
	env->option_y = SIZEY / 2;
	env->iter = MAX;
	env->stop = 0;
	ft_start(env);
}
