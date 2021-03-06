/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:52:56 by awyart            #+#    #+#             */
/*   Updated: 2017/06/06 21:59:41 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_iterp(t_env *env)
{
	env->iter -= 10;
	ft_start(env);
}

void	ft_iterl(t_env *env)
{
	env->iter += 10;
	ft_start(env);
}
