/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_coll.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:41:43 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/15 18:53:14 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"

void	render_collectable(t_game *game, char block, int x, int y)
{
	if (block == 'C')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.coll.ptr, x, y);
	else if (block == 'c')
		mlx_put_image_to_window(game->mlx.ptr, game->mlx.win.ptr,
			game->assets.coll.ptr, x, y);
}
