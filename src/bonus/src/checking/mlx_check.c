/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:07:51 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:41:22 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"
#include "utils.h"

static int	check_mlx(t_game *game)
{
	if (!game->mlx.ptr || !game->mlx.win.ptr)
		return (-1);
	return (0);
}

static int	check_assets(t_game *game)
{
	if (!game->assets.pl_lf.one.ptr
		|| !game->assets.pl_lf.two.ptr
		|| !game->assets.pl_rh.one.ptr
		|| !game->assets.pl_rh.two.ptr
		|| !game->assets.en_lf.one.ptr
		|| !game->assets.en_lf.two.ptr
		|| !game->assets.en_rh.one.ptr
		|| !game->assets.en_rh.two.ptr
		|| !game->assets.wall.ptr
		|| !game->assets.bg.ptr
		|| !game->assets.exit.one.ptr
		|| !game->assets.exit.two.ptr
		|| !game->assets.coll.ptr)
		return (-1);
	return (0);
}

int	mlx_check(t_game *game)
{
	if (check_mlx(game))
	{
		printerr(1, "Error initialzing mlx\n");
		return (-1);
	}
	else if (check_assets(game))
	{
		printerr(1, "Error initialzing assets.\n");
		return (-1);
	}
	return (0);
}
