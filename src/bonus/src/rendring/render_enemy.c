/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_enemy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:41:24 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/14 21:53:07 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"

void	render_enemy(t_game *game, char block, int x, int y)
{
	if (block == 'X')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.en_rh.one.ptr, x, y);
	else if (block == 'x')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.en_rh.two.ptr, x, y);
	else if (block == 'Y')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.en_lf.one.ptr, x, y);
	else if (block == 'y')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.en_lf.two.ptr, x, y);
}
