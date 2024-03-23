/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_splits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:35 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/19 13:59:35 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_types.h"

void	free_splits(char **splits)
{
	int	i;

	i = 0;
	if (!splits)
		return ;
	while (splits[i])
	{
		free(splits[i]);
		i++;
	}
	free(splits);
}
