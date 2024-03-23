/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/29 17:58:42 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "get_next_line.h"
#include "libft.h"
#include "parsing.h"
#include "so_long_types.h"
#include "utils.h"

static void	tweak_map(char **layout)
{
	int	i;
	int	j;

	i = 0;
	while (layout[i])
	{
		j = 0;
		while (layout[i][j])
		{
			if (j > 0 && layout[i][j] == '\n')
				layout[i][j] = '\0';
			j++;
		}
		i++;
	}
}

char	**parser(char *file_name)
{
	char	**layout;

	layout = read_file(file_name);
	if (!layout)
	{
		printerr(1, "Empty or no existing map file!\n");
		return (NULL);
	}
	tweak_map(layout);
	return (layout);
}
