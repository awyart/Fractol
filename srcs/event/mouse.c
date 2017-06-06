/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:55:51 by awyart            #+#    #+#             */
/*   Updated: 2017/06/07 00:16:26 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include "stdio.h"

int		mouse_move_hook(int x, int y, t_env *env)
{
	if (x < 0 || x >= env->sizex || y < 0 || y >= env->sizey)
		return (0);
	if (env->stop != 1)
	{
		env->option_x = x;
		env->option_y = y;
	}
	if (env->color == 1)
	{
		env->colorvalueg = rand() % 10;
		env->colorvaluer = rand() % 10;
		env->colorvalueb = rand() % 10;
	}
	printf("%i-%i-%i-%i\n",env->option_y, env->option_x, env->z, env->iter);
	ft_start(env);
	return (0);
}

int		mouse_click_hook(int key, int x, int y, t_env *env)
{
	static int i = 0;

	if (key == 5)
	{
		env->x += x / 6;
		env->y += y / 6;
		env->z = env->z * 1.2;
		env->y = env->y * 1.2;
		env->x = env->x * 1.2;
		if (i % 2 == 0)
			env->iter += 1;
		i++;
	}
	if (key == 4)
	{
		env->x -= x / 6;
		env->y -= y / 6;
		env->z = env->z / 1.2;
		env->y = env->y / 1.2;
		env->x = env->x / 1.2;
		env->iter -= 1;
	}
	ft_start(env);
	return (0);
}

void	ft_mouse_stop(t_env *env)
{
	env->stop = !(env->stop);
	ft_start(env);
}
