/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:24:28 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/15 16:00:41 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "so_long_types.h"
#include "utils.h"

int	map_req_check(int players, int collectables, int exits);
int	top_bottom_check(char **layout);
int	map_sides_check(char **layout);
int	closed_map_check(char **layout);
int	map_shape_check(char **layout);
int	mlx_check(t_game *game);

static int	check_valid_blocks(char **layout)
{
	int	i;
	int	j;

	i = 0;
	while (layout[i])
	{
		j = 0;
		while (layout[i][j])
		{
			if (layout[i][j] != '0' &&
			layout[i][j] != '1' &&
			layout[i][j] != 'P' &&
			layout[i][j] != 'C' &&
			layout[i][j] != 'X' &&
			layout[i][j] != 'E')
			{
				printerr(1, "Invalid Block in map!\n");
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	map_checker(t_game *game)
{
	if (map_shape_check(game->map.layout))
		return (-1);
	if (closed_map_check(game->map.layout))
		return (-1);
	if (check_valid_blocks(game->map.layout))
		return (-1);
	if (map_req_check(game->map.stats.players, game->map.stats.collectables,
			game->map.stats.exits))
		return (-1);
	return (0);
}

int	checker(t_game *game)
{
	if (map_checker(game) || mlx_check(game))
		return (-1);
	return (0);
}
