#include "fractol.h"

static void	zoom_auto(t_env *e)
{
	env->z = env->z * 1.10;
	env->x = env->x * 1.10;
	env->y = env->y * 1.10;
	env->x += env->sizex / 20;
	env->y += env->sizey / 20;
	env->iter += 2;
}

int		loop_hook(t_env *env)
{
	if (e->zoom_auto == 1)
	{
		zoom_auto(env);
		ft_start(env);
	}
	return (0);
}
