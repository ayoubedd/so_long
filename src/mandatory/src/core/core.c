/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/15 16:34:10 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checking.h"
#include "config.h"
#include "core.h"
#include "hooks.h"
#include "parsing.h"
#include "rendering.h"
#include "so_long_types.h"
#include "utils.h"

static int	init(t_game *game, char *file_name);
static void	config_game(t_game *game);
static void	config_mlx(t_game *game);

void	core(char *file_name)
{
	t_game	game;

	if (init(&game, file_name))
		return ;
	if (checker(&game))
	{
		cleanup(&game);
		return ;
	}
	render_map(&game);
	mlx_hook(game.mlx.win.ptr, ON_DESTROY, 0, &cleanup, &game);
	mlx_hook(game.mlx.win.ptr, 2, 1, &hooks_handler, &game);
	mlx_loop(game.mlx.ptr);
}

static int	init(t_game *game, char *file_name)
{
	if (check_file(file_name))
		return (-1);
	game->map.layout = parser(file_name);
	if (!game->map.layout)
		return (-1);
	game->player.moves = 0;
	game->player.score = 0;
	game->map.stats.collectables = 0;
	game->map.stats.players = 0;
	game->map.stats.exits = 0;
	config_game(game);
	game->mlx.win.height = game->map.heigh * ASSET_HEIGHT;
	game->mlx.win.width = game->map.width * ASSET_WIDTH;
	config_mlx(game);
	return (0);
}

static void	config_mlx(t_game *game)
{
	game->mlx.ptr = mlx_init();
	if (!game->mlx.ptr)
		return ;
	game->mlx.win.ptr = mlx_new_window(game->mlx.ptr, game->mlx.win.width,
			game->mlx.win.height, WINDOW_TITLE);
	game->assets.player.ptr = mlx_xpm_file_to_image(game->mlx.ptr, PLAYER_ASSET,
			&game->assets.collectable.width, &game->assets.collectable.height);
	game->assets.collectable.ptr = mlx_xpm_file_to_image(game->mlx.ptr,
			COLLETABLE_ASSET, &game->assets.collectable.width,
			&game->assets.collectable.height);
	game->assets.exit.ptr = mlx_xpm_file_to_image(game->mlx.ptr, EXIT_ASSET,
			&game->assets.collectable.width, &game->assets.collectable.height);
	game->assets.wall.ptr = mlx_xpm_file_to_image(game->mlx.ptr, WALL_ASSET,
			&game->assets.collectable.width, &game->assets.collectable.height);
	game->assets.background.ptr = mlx_xpm_file_to_image(game->mlx.ptr,
			BACKGROUND_ASSET, &game->assets.collectable.width,
			&game->assets.collectable.height);
}

static void	config_game(t_game *game)
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
