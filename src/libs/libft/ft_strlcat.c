/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:25:07 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/18 19:59:04 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	j;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	k = ft_strlen(dst);
	j = ft_strlen(src);
	if (k > dstsize)
		return (j + dstsize);
	while (i + k < dstsize - 1 && src[i])
	{
		dst[k + i] = src[i];
		i++;
	}
	dst[k + i] = 0;
	return (k + j);
}
