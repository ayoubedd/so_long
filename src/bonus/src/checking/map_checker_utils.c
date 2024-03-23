/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:24:50 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/28 17:44:06 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "so_long_types.h"
#include "utils.h"

int	map_req_check(int players, int collectables, int exits)
{
	if (players != 1)
	{
		if (players < 1)
			printerr(1, "At least one player should be present in the map.\n");
		else
			printerr(1, "Only one player should be present in the map.\n");
		return (-1);
	}
	else if (exits < 1)
	{
		printerr(1, "At least one exit should be present in the map.\n");
		return (-1);
	}
	else if (collectables < 1)
	{
		printerr(1, "At least one collectable should be present in the map.\n");
		return (-1);
	}
	return (0);
}

int	top_bottom_check(char **layout)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (layout[0][i] == '1')
		i++;
	if (layout[0][i] != '\0')
		return (-1);
	i = 0;
	while (layout[i + 1] != NULL)
		i++;
	while (layout[i][j] == '1')
		j++;
	if (layout[i][j] != '\0')
		return (-1);
	return (0);
}

int	map_sides_check(char **layout)
{
	int	i;

	i = 0;
	while (layout[i])
	{
		if (layout[i][0] != '1')
			return (-1);
		if (layout[i][ft_strlen(layout[i]) - 1] != '1')
			return (-1);
		i++;
	}
	return (0);
}

int	closed_map_check(char **layout)
{
	if (top_bottom_check(layout) || map_sides_check(layout))
	{
		printerr(1, "Map is not surrounded by walls!\n");
		return (-1);
	}
	return (0);
}

int	map_shape_check(char **layout)
{
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(layout[0]);
	while (layout[i])
	{
		if (ft_strlen(layout[i]) != len)
		{
			printerr(1, "Map not rectangle!\n");
			return (-1);
		}
		i++;
	}
	return (0);
}
