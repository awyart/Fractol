/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 21:14:20 by awyart            #+#    #+#             */
/*   Updated: 2017/06/07 17:36:52 by awyart           ###   ########.fr       */
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
	ft_putstr_fd("5 : Exemple de Liapounov\n", 1);
	ft_putstr_fd("6 : Fractale de julia 3 axes\n", 1);
	ft_putstr_fd("7 : Fractale de thunder\n", 1);
	exit(0);
}

void	ft_usage(void)
{
	ft_putstr_fd("usage : ./fractol [012345678]\n", 1);
	exit(0);
}

void	ft_info1(void)
{
	ft_putstr_fd("Usage		:\n", 1);
	ft_putstr_fd("-------------------------\n", 1);
	ft_putstr_fd("R		: Reset\n", 1);
	ft_putstr_fd("Q		: Dependance souris/parametre\n", 1);
	ft_putstr_fd("fleches		: Deplacement\n", 1);
	ft_putstr_fd("1		: Active les couleurs aleatoires\n", 1);
	ft_putstr_fd("P/L		: Changement iteration \n", 1);
	ft_putstr_fd("Molette 	: Zoom/DeZoom \n", 1);
	ft_putstr_fd("+- 	: Zoom/DeZoom \n", 1);
	ft_putstr_fd("4-5-6		: Positions Remarquables\n", 1);
	ft_putstr_fd("Z		: Zoom auto\n", 1);
	ft_putstr_fd("ESC		: Quitter\n", 1);
}
