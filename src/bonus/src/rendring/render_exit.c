/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_exit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:43:12 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/14 21:55:21 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"

void	render_exit(t_game *game, int x, int y)
{
	if (game->player.score == game->map.stats.collectables)
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.exit.one.ptr, x, y);
	else
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.exit.two.ptr, x, y);
}
