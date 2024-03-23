/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:16:01 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/04/23 00:54:25 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "so_long_types.h"

void	game_over(t_game *game, int status);

static int	_check_move(t_game *game, int y, int x)
{
	if (game->map.layout[y][x] == 'X' ||
		game->map.layout[y][x] == 'x' ||
		game->map.layout[y][x] == 'Y' ||
		game->map.layout[y][x] == 'y')
		game_over(game, 0);
	if (game->map.layout[y][x] != '1' ||
			game->map.layout[y][x] == 'c' ||
			game->map.layout[y][x] == 'C')
		return (1);
	return (0);
}

int	check_move(t_game *game, int move)
{
	if (move == KB_MOVE_BACKWARD)
	{
		if (_check_move(game, game->player.y + 1, game->player.x))
			return (1);
	}
	else if (move == KB_MOVE_FORWARD)
	{
		if (_check_move(game, game->player.y - 1, game->player.x))
			return (1);
	}
	else if (move == KB_MOVE_LEFT)
	{
		if (_check_move(game, game->player.y, game->player.x - 1))
			return (1);
	}
	else if (move == KB_MOVE_RIGHT)
		if (_check_move(game, game->player.y, game->player.x + 1))
			return (1);
	return (0);
}
