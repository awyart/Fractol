/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 15:05:50 by awyart            #+#    #+#             */
/*   Updated: 2017/06/06 22:03:24 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_display_img(t_env *env)
{
	mlx_put_image_to_window(env->mlx, env->win, env->img, 0, 0);
	mlx_destroy_image(env->mlx, env->img);
	return (1);
}

void	ft_create_img(t_env *env)
{
	int		bpp;
	int		sizeline;
	int		endian;

	env->img = mlx_new_image(env->mlx, env->sizex, env->sizey);
	env->pix = mlx_get_data_addr(env->img, &bpp, &sizeline, &endian);
}
