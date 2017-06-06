/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:14:20 by awyart            #+#    #+#             */
/*   Updated: 2017/06/06 22:03:10 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	err_arg(void)
{
	ft_putstr_fd("Usage :\n", 1);
	ft_putstr_fd("1 : Julia\n", 1);
	ft_putstr_fd("2 : Ensemble de Mandelbrot\n", 1);
	ft_putstr_fd("3 : Le petit bateau\n", 1);
	ft_putstr_fd("4 : fractale de newton\n", 1);
	ft_putstr_fd("5 : Liapounov\n", 1);
	exit(0);
}
