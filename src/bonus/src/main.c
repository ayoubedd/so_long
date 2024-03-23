/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:16:05 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/05/14 22:02:52 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"
#include "ft_printf.h"
#include "so_long_types.h"
#include "utils.h"

int	main(int argc, char *argv[])
{
	char	*file_name;

	if (argc != 2)
	{
		usage(argc, argv);
		return (10);
	}
	file_name = argv[1];
	core(file_name);
}
