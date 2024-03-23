/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:16:28 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 16:03:10 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"
#include "utils.h"

int	cleanup(t_game *game)
{
	free_splits(game->map.layout);
	if (game->mlx.ptr && game->assets.player.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.player.ptr);
	if (game->mlx.ptr && game->assets.background.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.background.ptr);
	if (game->mlx.ptr && game->assets.exit.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.exit.ptr);
	if (game->mlx.ptr && game->assets.collectable.ptr)
		mlx_destroy_image(game->mlx.ptr, game->assets.collectable.ptr);
	if (game->mlx.ptr && game->mlx.win.ptr)
		mlx_destroy_window(game->mlx.ptr, game->mlx.win.ptr);
	if (!game->mlx.ptr)
		free(game->mlx.ptr);
	exit(EXIT_SUCCESS);
}
