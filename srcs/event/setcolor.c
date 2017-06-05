/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setcolor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 16:00:56 by awyart            #+#    #+#             */
/*   Updated: 2017/06/05 17:04:43 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_define_1(t_env *env, double z, double zmax)
{
	env->r = 255 - (255) * z / zmax; 
	env->g = 0;
	env->b = 0;
}

void	ft_define_err(t_env *env)
{
	env->r = 0; 
	env->g = 0;
	env->b = 0; 
}
