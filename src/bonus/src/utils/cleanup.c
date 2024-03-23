/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:16:28 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 15:01:17 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"
#include "utils.h"

void	destroy_player_assets(t_game *game)
{
	if (game->assets.pl_lf.one.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.pl_lf.one.ptr);
	if (game->assets.pl_lf.two.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.pl_lf.two.ptr);
	if (game->assets.pl_rh.one.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.pl_rh.one.ptr);
	if (game->assets.pl_rh.two.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.pl_rh.two.ptr);
}

void	destroy_enemy_assets(t_game *game)
{
	if (game->assets.en_lf.one.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.en_lf.one.ptr);
	if (game->assets.en_lf.two.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.en_lf.two.ptr);
	if (game->assets.en_rh.one.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.en_rh.one.ptr);
	if (game->assets.en_rh.two.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.en_rh.two.ptr);
}

void	destroy_env_assets(t_game *game)
{
	if (game->assets.bg.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.bg.ptr);
	if (game->assets.coll.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.coll.ptr);
	if (game->assets.wall.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.wall.ptr);
	if (game->assets.exit.one.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.exit.one.ptr);
	if (game->assets.exit.two.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.exit.two.ptr);
}

void	destroy_assets(t_game *game)
{
	if (game->mlx.ptr)
	{
		destroy_enemy_assets(game);
		destroy_env_assets(game);
		destroy_player_assets(game);
	}
}

int	cleanup(t_game *game)
{
	free_splits(game->map.layout);
	destroy_assets(game);
	free(game->mlx.ptr);
	exit(EXIT_SUCCESS);
}
