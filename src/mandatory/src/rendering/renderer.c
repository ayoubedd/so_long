/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   renderer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:15:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/04/17 03:27:12 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "libft.h"
#include "so_long_types.h"

static void	render_block(t_game *game, char block, int x, int y)
{
	if (block == '0')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.background.ptr, x, y);
	else if (block == '1')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.wall.ptr, x, y);
	else if (block == 'C')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.collectable.ptr, x, y);
	else if (block == 'E')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.exit.ptr, x, y);
	else if (block == 'P')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.player.ptr, x, y);
}

int	render_map(t_game *game)
{
	int		x;
	int		y;

	y = 0;
	while (y < game->map.heigh)
	{
		x = 0;
		while (x < game->map.width)
		{
			render_block(game, '0', x * ASSET_WIDTH, y * ASSET_HEIGHT);
			render_block(game, game->map.layout[y][x], x * ASSET_WIDTH, y
				* ASSET_HEIGHT);
			x++;
		}
		y++;
	}
	return (0);
}
