/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:38:47 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/19 23:50:07 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b_size;
	void	*tmp;

	b_size = count * size;
	tmp = malloc(b_size);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, b_size);
	return (tmp);
}
