/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:58:10 by awyart            #+#    #+#             */
/*   Updated: 2017/06/06 21:58:21 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_evz(t_env *env)
{
	env->y += 25;
	ft_start(env);
}

void	ft_evq(t_env *env)
{
	env->x += 25;
	ft_start(env);
}

void	ft_evs(t_env *env)
{
	env->y -= 25;
	ft_start(env);
}

void	ft_evd(t_env *env)
{
	env->x -= 25;
	ft_start(env);
}
