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

void	ft_ev69(t_env *env)
{
	env->iter += 1;
	env->zoom += 1; 
	ft_start(env);
}

void	ft_ev78(t_env *env)
{
	if (env->zoom == 1)
		return ;
	env->iter -= 1;
	env->zoom -= 1;
	ft_start(env);
}
