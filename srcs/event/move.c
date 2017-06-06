#include "fractol.h"

void	ft_evz(t_env *env)
{
	env->y += 100;
	ft_start(env);
}

void	ft_evq(t_env *env)
{
	env->x += 100;
	ft_start(env);
}

void	ft_evs(t_env *env)
{
	env->y -= 100;
	ft_start(env);
}

void	ft_evd(t_env *env)
{
	env->x -= 100;
	ft_start(env);
}
