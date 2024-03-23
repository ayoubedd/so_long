/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:33:10 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "ft_printf.h"
#include "hooks.h"
#include "rendering.h"
#include "so_long_types.h"
#include "utils.h"

void	move_up(t_game *game);
void	move_right(t_game *game);
void	move_down(t_game *game);
void	move_left(t_game *game);
int		check_move(t_map map, t_player player, int move);
void	game_over(t_game *game, int status);
void	collect(t_game *game, int move);

int	hooks_handler(int keycode, t_game *game)
{
	if (keycode == KB_MOVE_BACKWARD)
		move_down(game);
	else if (keycode == KB_MOVE_FORWARD)
		move_up(game);
	else if (keycode == KB_MOVE_LEFT)
		move_left(game);
	else if (keycode == KB_MOVE_RIGHT)
		move_right(game);
	else if (keycode == KB_QUIT || keycode == 17)
		cleanup(game);
	return (0);
}
