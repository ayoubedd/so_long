/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_over.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:15:57 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:36:57 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "ft_printf.h"
#include "so_long_types.h"
#include "utils.h"

void	game_over(t_game *game, int status)
{
	if (status == 1)
		ft_printf("You won!\n");
	else if (status == 0)
		ft_printf("You loose!\n");
	cleanup(game);
}
