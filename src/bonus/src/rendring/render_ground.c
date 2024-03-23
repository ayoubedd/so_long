/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_ground.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:42:55 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/14 21:49:26 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"

void	render_ground(t_game *game, int x, int y)
{
	mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
		game->assets.bg.ptr, x, y);
}
