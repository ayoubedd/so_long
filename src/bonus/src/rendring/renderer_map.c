/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   renderer_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:15:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:24:59 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "libft.h"
#include "so_long_types.h"

void	render_player(t_game *game, char block, int x, int y);
void	render_enemy(t_game *game, char block, int x, int y);
void	render_exit(t_game *game, int x, int y);
void	render_wall(t_game *game, int x, int y);
void	render_ground(t_game *game, int x, int y);
void	render_collectable(t_game *game, char block, int x, int y);

static void	render_block(t_game *game, char block, int x, int y)
{
	if (block == '0')
		render_ground(game, x, y);
	else if (block == '1')
		render_wall(game, x, y);
	else if (block == 'C')
		render_collectable(game, block, x, y);
	else if (block == 'P' || block == 'p' || block == 'u' || block == 'U')
		render_player(game, block, x, y);
	else if (block == 'X' || block == 'x' || block == 'y' || block == 'Y')
		render_enemy(game, block, x, y);
	else if (block == 'E' || block == 'e')
		render_exit(game, x, y);
}

int	render_map(t_game *game)
{
	int		x;
	int		y;
	char	*moves;
	char	*str;

	y = 0;
	while (y < game->map.heigh)
	{
		x = 0;
		while (x < game->map.width)
		{
			render_block(game, '0', x * ASSET_WIDTH, y * ASSET_HEIGHT);
			render_block(game, game->map.layout[y][x], x * ASSET_WIDTH,
				y * ASSET_HEIGHT);
			x++;
		}
		y++;
	}
	moves = ft_itoa(game->player.moves);
	str = ft_strjoin("Moves: ", moves);
	mlx_string_put(game->mlx.ptr, game->mlx.win.ptr, 20, 20, 0xffffff, str);
	free(str);
	free(moves);
	return (0);
}
