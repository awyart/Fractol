#include "fractol.h"

void	ft_reset(t_env *env)
{
	env->x = 0;
	env->y = 0;
	env->z = 150;
	env->option_x = SIZEX / 2;
	env->option_y = SIZEY / 2;
	env->iter = 50;
	env->stop = 0;
	env->color_value = 1;
}
