/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 21:56:39 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/14 22:03:53 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	usage(int argc, char *argv[])
{
	if (argc > 2)
		printerr(1, "Only one map is required to run the game!\n");
	else
		printerr(1, "At least one map is required to run the game!\n");
	printerr(0, "usage:\n");
	printerr(0, "\t");
	printerr(0, argv[0]);
	printerr(0, "\t\tmap.ber\n");
}
