/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 16:44:08 by jschotte          #+#    #+#             */
/*   Updated: 2016/01/07 15:01:55 by jschotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		key_hook(int keycode, t_env *e)
{
	if (keycode == 53)
		exit(0);
	return (0);
}

int		main(int argc, char **argv)
{
	t_env e;
	
	if (argc < 2)
		ft_exit("Argument missing");
	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, WIN_X, WIN_Y, "42");
	mlx_key_hook(e.win, key_hook, &e);
	mlx_pixel_put(e.mlx, e.win, 250, 250, 0xFF0000);
	mlx_loop(e.mlx);
	return (0);
}
