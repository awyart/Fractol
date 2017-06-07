/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awyart <awyart@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:08:02 by awyart            #+#    #+#             */
/*   Updated: 2017/06/04 16:47:30 by awyart           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_putstr_fd(char *str, int fd)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(fd, &str[i], 1);
		i++;
	}
}