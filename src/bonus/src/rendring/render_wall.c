/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_wall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:42:21 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/14 21:49:36 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"

void	render_wall(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
		game->assets.wall.ptr, x, y);
}
