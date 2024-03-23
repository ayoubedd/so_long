/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:28:40 by aeddaoud         ###   ########.fr       */
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
#include "animation.h"

static int	init(t_game *game, char *file_name);
void		game_over(t_game *game);
void		config_mlx(t_game *game);
void		config_game(t_game *game);

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
	mlx_loop_hook(game.mlx.ptr, &animation, &game);
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
