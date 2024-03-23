/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/04/14 20:35:39 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "so_long_types.h"
#include "utils.h"

int	check_file(char *file_name)
{
	char	*c;

	c = ft_strrchr(file_name, '.');
	if (!c)
	{
		printerr(1, "The map file must end with .ber file extension!\n");
		return (-1);
	}
	if (ft_strcmp(c, ".ber") != 0)
	{
		printerr(1, "Invalid map file extension!\n");
		return (-1);
	}
	return (0);
}
