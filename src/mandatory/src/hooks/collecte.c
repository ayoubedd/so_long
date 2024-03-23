/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collecte.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:19:13 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/15 16:34:10 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "rendering.h"
#include "so_long_types.h"

void	collect(t_game *game, int move)
{
	if (move == KB_MOVE_BACKWARD)
		game->map.layout[game->player.y + 1][game->player.x] = '0';
	else if (move == KB_MOVE_FORWARD)
		game->map.layout[game->player.y - 1][game->player.x] = '0';
	else if (move == KB_MOVE_LEFT)
		game->map.layout[game->player.y][game->player.x - 1] = '0';
	else if (move == KB_MOVE_RIGHT)
		game->map.layout[game->player.y][game->player.x + 1] = '0';
	game->player.score++;
	render_map(game);
}
