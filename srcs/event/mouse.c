#include "fractol.h"

int		mouse_move_hook(int x, int y, t_env *env)
{
	if (x < 0 || x >= env->sizex || y < 0 || y >= env->sizey ||
			env->stop == 1)
		return (0);
	env->option_x = x;
	env->option_y = y;
	ft_start(env);
	return (0);
}

int		mouse_click_hook(int key, int x, int y, t_env *env)
{
	if (key == 5)
	{
		env->x += x / 5;
		env->y += y / 5;
		env->z = e->z * 1.2;
		env->y = e->y * 1.2;
		env->x = e->x * 1.2;
	}
	if (key == 4)
	{
		env->x -= x / 5;
		env->y -= y / 5;
		env->z = env->z / 1.2;
		env->y = env->y / 1.2;
		env->x = env->x / 1.2;
	}
	ft_start(env);
	return (0);
}

int		ft_mouse_stop(t_env *env)
{
	env->stop = !env->stop;
	ft_start(env);
	return (0);
}