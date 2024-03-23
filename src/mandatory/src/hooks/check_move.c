/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:16:01 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/27 14:19:24 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "so_long_types.h"

int	check_move(t_map map, t_player player, int move)
{
	if (move == KB_MOVE_BACKWARD)
	{
		if (map.layout[player.y + 1][player.x] != '1')
			return (1);
	}
	else if (move == KB_MOVE_FORWARD)
	{
		if (map.layout[player.y - 1][player.x] != '1')
			return (1);
	}
	else if (move == KB_MOVE_LEFT)
	{
		if (map.layout[player.y][player.x - 1] != '1')
			return (1);
	}
	else if (move == KB_MOVE_RIGHT)
		if (map.layout[player.y][player.x + 1] != '1')
			return (1);
	return (0);
}
