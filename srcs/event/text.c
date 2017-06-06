#include "fractol.h"

static void		ft_put_string(char *s, int l, int c, t_env *env)
{
	mlx_string_put(e->mlx, e->win, 3 + c * 10, l * 13, 0xFF0000, s);
}

void			ft_put_info(t_env *e)
{
	ft_put_string("DEEP :", 0, 0, e);
	ft_put_string(ft_itoa(e->i_max), 0, 7, e);
	ft_put_string("X    :", 1, 0, e);
	ft_put_string(ft_itoa(e->x), 1, 7, e);
	ft_put_string("Y    :", 2, 0, e);
	ft_put_string(ft_itoa(e->y), 2, 7, e);
	ft_put_string("Z    :", 3, 0, e);
	ft_put_string(ft_itoa(e->z), 3, 7, e);
	ft_put_string("OPT_X:", 4, 0, e);
	ft_put_string(ft_itoa(e->option_x), 4, 7, e);
	ft_put_string("OPT_Y:", 5, 0, e);
	ft_put_string(ft_itoa(e->option_y), 5, 7, e);
}
