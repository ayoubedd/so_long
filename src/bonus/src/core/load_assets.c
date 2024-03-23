/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_assets.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:21:57 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:40:34 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "so_long_types.h"
#include "utils.h"

static void	load_player_assets(t_game *game)
{
	game->assets.pl_lf.one.ptr = mlx_xpm_file_to_image(game->mlx.ptr, PL_LF_ONE,
			&game->assets.pl_lf.one.width, &game->assets.pl_lf.one.height);
	game->assets.pl_lf.two.ptr = mlx_xpm_file_to_image(game->mlx.ptr, PL_LF_TWO,
			&game->assets.pl_lf.two.width, &game->assets.pl_lf.two.height);
	game->assets.pl_rh.one.ptr = mlx_xpm_file_to_image(game->mlx.ptr, PL_RH_ONE,
			&game->assets.pl_rh.one.width, &game->assets.pl_rh.one.height);
	game->assets.pl_rh.two.ptr = mlx_xpm_file_to_image(game->mlx.ptr, PL_RH_TWO,
			&game->assets.pl_rh.two.width, &game->assets.pl_rh.two.height);
}

static void	load_enemy_assets(t_game *game)
{
	game->assets.en_lf.one.ptr = mlx_xpm_file_to_image(game->mlx.ptr, EN_LF_ONE,
			&game->assets.en_lf.one.width, &game->assets.en_lf.one.height);
	game->assets.en_lf.two.ptr = mlx_xpm_file_to_image(game->mlx.ptr, EN_LF_TWO,
			&game->assets.en_lf.two.width, &game->assets.en_lf.two.height);
	game->assets.en_rh.one.ptr = mlx_xpm_file_to_image(game->mlx.ptr, EN_RH_ONE,
			&game->assets.en_rh.one.width, &game->assets.en_rh.one.height);
	game->assets.en_rh.two.ptr = mlx_xpm_file_to_image(game->mlx.ptr, EN_RH_TWO,
			&game->assets.en_rh.two.width, &game->assets.en_rh.two.height);
}

static void	load_env_assets(t_game *game)
{
	game->assets.wall.ptr = mlx_xpm_file_to_image(game->mlx.ptr, WALL_AST,
			&game->assets.wall.width, &game->assets.wall.height);
	game->assets.bg.ptr = mlx_xpm_file_to_image(game->mlx.ptr, BG_AST,
			&game->assets.wall.width, &game->assets.wall.height);
	game->assets.exit.one.ptr = mlx_xpm_file_to_image(game->mlx.ptr, EX_OP_AST,
			&game->assets.exit.one.width, &game->assets.exit.one.height);
	game->assets.exit.two.ptr = mlx_xpm_file_to_image(game->mlx.ptr, EX_CL_AST,
			&game->assets.exit.two.width, &game->assets.exit.two.height);
	game->assets.coll.ptr = mlx_xpm_file_to_image(game->mlx.ptr, COLL_AST,
			&game->assets.coll.width, &game->assets.coll.height);
}

void	load_assets(t_game *game)
{
	load_player_assets(game);
	load_enemy_assets(game);
	load_env_assets(game);
}
