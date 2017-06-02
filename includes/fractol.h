/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:00:22 by awyart            #+#    #+#             */
/*   Updated: 2017/06/02 15:06:36 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define NOZ 2000000
# define SIZEX 1280
# define SIZEY 720
# include "mlx.h"
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <math.h>

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	void			*img;
	char			*pix;
	int				type;
}					t_env;

typedef struct		s_ev
{
	int				key;
	void			(*f)(t_env *env);
}					t_ev;

void				ft_putstr_fd(char *strm int fd);

int					ft_julia(t_env *env);
int					ft_liapounov(t_env *env);
int					ft_mandelbrot(t_env *env);

int					ft_display_img(t_env *env);
void				ft_create_img(t_env *env);

#endif
