/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printerr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:15:30 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/28 17:42:12 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	printerr(int mode, char *str)
{
	if (str)
	{
		if (mode)
			write(2, "Error\n", 6);
		write(2, str, ft_strlen(str));
	}
}
