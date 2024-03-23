/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:48:24 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/18 20:44:38 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	tc;

	i = 0;
	tc = (unsigned char)c;
	while (i < len)
	{
		*((char *)b + i) = tc;
		i++;
	}
	return (b);
}
