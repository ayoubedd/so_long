/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:34:05 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/04/23 22:48:23 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"
#include "config.h"

void		load_assets(t_game *game);

void	config_mlx(t_game *game)
{
	game->mlx.ptr = mlx_init();
	if (!game->mlx.ptr)
		return ;
	game->mlx.win.ptr = mlx_new_window(game->mlx.ptr, game->mlx.win.width,
			game->mlx.win.height, WINDOW_TITLE);
	if (!game->mlx.win.ptr)
		return ;
	load_assets(game);
}

void	config_game(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	while (game->map.layout[y])
	{
		x = 0;
		while (game->map.layout[y][x])
		{
			if (game->map.layout[y][x] == 'C')
				game->map.stats.collectables++;
			else if (game->map.layout[y][x] == 'P')
			{
				game->player.x = x;
				game->player.y = y;
				game->map.stats.players++;
			}
			else if (game->map.layout[y][x] == 'E')
				game->map.stats.exits++;
			x++;
		}
		y++;
	}
	game->map.heigh = y;
	game->map.width = x;
}
