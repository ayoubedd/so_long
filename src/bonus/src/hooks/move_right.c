/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:15:45 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:33:39 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "ft_printf.h"
#include "hooks.h"
#include "rendering.h"
#include "so_long_types.h"
#include "utils.h"

int		check_move(t_game *game, int move);
void	collect(t_game *game, int move);
void	game_over(t_game *game, int status);

static int	exit_game(t_game *game)
{
	if (game->player.score == game->map.stats.collectables)
		game_over(game, 1);
	else
		return (1);
	return (0);
}

void	move_right(t_game *game)
{
	int	x;
	int	y;

	x = game->player.x;
	y = game->player.y;
	if (check_move(game, KB_MOVE_RIGHT))
	{
		if (game->map.layout[y][x + 1] == 'C'
			|| game->map.layout[y][x + 1] == 'c' )
			collect(game, KB_MOVE_RIGHT);
		else if (game->map.layout[y][x + 1] == 'E')
			if (exit_game(game))
				return ;
		if (game->map.layout[y][x] == 'u' || game->map.layout[y][x] == 'p')
			game->map.layout[y][x + 1] = 'P';
		else
			game->map.layout[y][x + 1] = 'p';
		game->map.layout[y][x] = '0';
		game->player.moves++;
		game->player.x++;
		render_map(game);
	}
}
