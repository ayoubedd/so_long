/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animate_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 01:16:08 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:33:52 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"
#include "rendering.h"

void	game_over(t_game *game, int status);
int		enemy_move_check(t_game *game, int i, int j, char move);
void	enemy_move_right(t_game *game, int i, int j);
void	enemy_move_left(t_game *game, int i, int j);
void	move_enemy(t_game *game, int i, int j);
int		is_enemy(t_game *game, int i, int j);

void	_move_enemy(t_game *game, int *i, int *j)
{
	if (game->map.layout[*i][*j + 1] == '1'
	&& game->map.layout[*i][*j - 1] == '1')
	{
		(*j)++;
		return ;
	}
	move_enemy(game, *i, *j);
	render_map(game);
	(*j)++;
}

void	move_enemys(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	if (rand() % 3000 != 0)
		return ;
	while (game->map.layout[i])
	{
		j = 0;
		while (game->map.layout[i][j])
		{
			if (is_enemy(game, i, j))
				_move_enemy(game, &i, &j);
			j++;
		}
		i++;
	}
}
