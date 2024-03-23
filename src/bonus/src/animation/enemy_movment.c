/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_movment.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:04:06 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/15 18:47:36 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"
#include "ft_printf.h"

void	game_over(t_game *game, int status);

int	enemy_move_check(t_game *game, int i, int j, char move)
{
	if (move == '>')
	{
		if (game->map.layout[i][j + 1] == '0')
			return (1);
		else if (game->map.layout[i][j + 1] == 'P'
		|| game->map.layout[i][j + 1] == 'p'
		|| game->map.layout[i][j + 1] == 'u'
		|| game->map.layout[i][j + 1] == 'U')
			game_over(game, 0);
	}
	else if (move == '<')
	{
		if (game->map.layout[i][j - 1] == '0')
			return (1);
		else if (game->map.layout[i][j - 1] == 'P'
		|| game->map.layout[i][j - 1] == 'p'
		|| game->map.layout[i][j - 1] == 'u'
		|| game->map.layout[i][j - 1] == 'U')
			game_over(game, 0);
	}
	return (0);
}

void	enemy_move_right(t_game *game, int i, int j)
{
	if (enemy_move_check(game, i, j, '>'))
	{
		if (game->map.layout[i][j] == 'X')
			game->map.layout[i][j + 1] = 'x';
		else
			game->map.layout[i][j + 1] = 'X';
		game->map.layout[i][j] = '0';
	}
	else
	{
		game->map.layout[i][j] = '0';
		game->map.layout[i][j - 1] = 'y';
	}
}

void	enemy_move_left(t_game *game, int i, int j)
{
	if (enemy_move_check(game, i, j, '<'))
	{
		if (game->map.layout[i][j] == 'Y')
			game->map.layout[i][j - 1] = 'y';
		else
			game->map.layout[i][j - 1] = 'Y';
		game->map.layout[i][j] = '0';
	}
	else
	{
		game->map.layout[i][j] = '0';
		game->map.layout[i][j + 1] = 'X';
	}
}

void	move_enemy(t_game *game, int i, int j)
{
	if (game->map.layout[i][j] == 'X'
	|| game->map.layout[i][j] == 'x')
		enemy_move_right(game, i, j);
	else if (game->map.layout[i][j] == 'Y'
	|| game->map.layout[i][j] == 'y')
		enemy_move_left(game, i, j);
}

int	is_enemy(t_game *game, int i, int j)
{
	if (game->map.layout[i][j] == 'X'
	|| game->map.layout[i][j] == 'x'
	|| game->map.layout[i][j] == 'Y'
	|| game->map.layout[i][j] == 'y')
		return (1);
	return (0);
}
