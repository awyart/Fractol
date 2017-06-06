#include "fractol.h"

void	ft_iterp(t_env *env)
{
	env->iter -= 10;
	ft_start(env);
}

 void	ft_iterl(t_env *env)
{
	env->iter += 10;
	ft_start(env);
}