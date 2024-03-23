/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:41:00 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/14 21:53:13 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"

void	render_player(t_game *game, char block, int x, int y)
{
	if (block == 'P')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.pl_rh.one.ptr, x, y);
	else if (block == 'p')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.pl_rh.two.ptr, x, y);
	else if (block == 'U')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.pl_lf.one.ptr, x, y);
	else if (block == 'u')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.pl_lf.two.ptr, x, y);
}
