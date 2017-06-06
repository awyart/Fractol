/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lianpounov.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 15:02:37 by awyart            #+#    #+#             */
/*   Updated: 2017/06/06 15:22:46 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_lianpounov(t_env *env)
{
	int x;
	int y;

	x = 0;
	y = 0;
	ft_create_img(env);
	while (y < SIZEY)
	{
		while (x < SIZEX)
		{
			x++;
		}
		x = 0;
		y++;
	}
	return (ft_display_img(env));
}
