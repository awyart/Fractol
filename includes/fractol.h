/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:00:22 by awyart            #+#    #+#             */
/*   Updated: 2017/06/07 00:10:41 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define NOZ 2000000
# define SIZEX 800
# define SIZEY 600
# define MAX 32
# define INF 1000
# define NBEVE 16
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
	int				iter;
	int				sizex;
	int				sizey;
	int				option_x;
	int				option_y;
	int				color;
	double			colorvaluer;
	double			colorvalueg;
	double			colorvalueb;
	int				x;
	int				y;
	int				z;
	int				r;
	int				g;
	int				b;
	int				stop;
	int				zauto;
	char			type;
	double			real;
	double			cstr;
	double			ima;
	double			csti;
	double			xn;
	double			yn;
}					t_env;

typedef struct		s_ev
{
	int				key;
	void			(*f)(t_env *env);
}					t_ev;

void				ft_putstr_fd(char *str, int fd);

int					ft_julia(t_env *env);
int					ft_start(t_env *env);
int					ft_newton(t_env *env);
int					ft_lianpounov(t_env *env);
int					ft_mandelbrot(t_env *env);

int					ft_display_img(t_env *env);
void				ft_create_img(t_env *env);
int					ft_init_mlx(t_env *env);

void				ft_reset(t_env *env);
int					loop_hook(t_env *env);
void				ft_exit(t_env *env);
void				ft_zoom_in(t_env *env);
void				ft_zoom_out(t_env *env);
void				ft_activate_zauto(t_env *env);
void				ft_iterp(t_env *env);
void				ft_iterl(t_env *env);
int					mouse_move_hook(int x, int y, t_env *env);
int					mouse_click_hook(int k, int x, int y, t_env *env);
void				ft_mouse_stop(t_env *env);
int					ft_burning(t_env *env);

void				ft_evd(t_env *env);
void				ft_evs(t_env *env);
void				ft_evq(t_env *env);
void				ft_evz(t_env *env);
void				err_arg(void);
void				ft_setup_newton(t_env *env);
void				ft_setup_julia(t_env *env);
void				ft_setup_boat(t_env *env);
void				ft_define_col(t_env *env);

void				ft_define_err(t_env *env);

void				ft_put_info(t_env *e);

#endif
