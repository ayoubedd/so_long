/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 01:19:02 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/04/23 00:58:25 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"

int		move_enemys(t_game *game);
void	game_over(t_game *game, int status);

int	animation(t_game *game)
{
	move_enemys(game);
	return (0);
}
