/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:00:22 by awyart            #+#    #+#             */
/*   Updated: 2017/06/05 17:49:00 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define NOZ 2000000
# define SIZEX 800
# define SIZEY 600
# define MAX 128
# define INF 1000
# define NBEVE 3
# define CSTI 0.013
# define CSTR 0.285
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
	double 			zoom;
	double 			real;
	double			ima;
	int 			iter;
	int 			r;
	int				g;
	int				b;
	char			type;
}					t_env;

typedef struct		s_ev
{
	int				key;
	void			(*f)(t_env *env);
}					t_ev;

void				ft_putstr_fd(char *str, int fd);

int					ft_julia(t_env *env);
int					ft_start(t_env *env);
int					ft_lianpounov(t_env *env);
int					ft_mandelbrot(t_env *env);

int					ft_display_img(t_env *env);
void				ft_create_img(t_env *env);
int					ft_init_mlx(t_env *env);


void				ft_exit(t_env *env);
void				ft_ev78(t_env *env);
void				ft_ev69(t_env *env);

void				ft_define_1(t_env *env, double z, double zmax);
void				ft_define_2(t_env *env, double z, double zmax);
void				ft_define_3(t_env *env, double z, double zmax);
void				ft_define_4(t_env *env, double z, double zmax);
void				ft_define_err(t_env *env);


#endif
