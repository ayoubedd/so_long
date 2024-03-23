/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/14 22:40:09 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "get_next_line.h"
#include "libft.h"
#include "so_long_types.h"
#include "utils.h"

static char	**insert_line(char **lines, char *line)
{
	char	**tmp;
	int		i;

	i = 0;
	if (lines)
		while (lines[i])
			i++;
	tmp = (char **)malloc((i + 2) * sizeof(char **));
	if (!tmp)
		return (NULL);
	i = 0;
	if (lines)
	{
		while (lines[i])
		{
			tmp[i] = lines[i];
			i++;
		}
	}
	tmp[i] = line;
	tmp[i + 1] = NULL;
	return (tmp);
}

char	**read_file(char *file_name)
{
	char	**lines;
	char	**tmp;
	char	*line;
	int		fd;

	lines = NULL;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		tmp = lines;
		lines = insert_line(lines, line);
		free(tmp);
	}
	return (lines);
}
