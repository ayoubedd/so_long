/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_down.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:15:54 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/15 16:34:10 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "ft_printf.h"
#include "hooks.h"
#include "rendering.h"
#include "so_long_types.h"
#include "utils.h"

int		check_move(t_map map, t_player player, int move);
void	collect(t_game *game, int move);
void	game_over(t_game *game);

void	move_down(t_game *game)
{
	int	x;
	int	y;

	x = game->player.x;
	y = game->player.y;
	if (check_move(game->map, game->player, KB_MOVE_BACKWARD))
	{
		if (game->map.layout[y + 1][x] == 'C')
			collect(game, KB_MOVE_BACKWARD);
		else if (game->map.layout[y + 1][x] == 'E')
		{
			if (game->player.score == game->map.stats.collectables)
				game_over(game);
			else
				return ;
		}
		game->map.layout[y][x] = '0';
		game->map.layout[y + 1][x] = 'P';
		game->player.y++;
		game->player.moves++;
		render_map(game);
	}
}
