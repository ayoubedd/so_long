/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_over.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:15:57 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/16 14:30:14 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.h"
#include "ft_printf.h"
#include "so_long_types.h"
#include "utils.h"

void	game_over(t_game *game)
{
	ft_printf("\nYou won!\n");
	cleanup(game);
}
