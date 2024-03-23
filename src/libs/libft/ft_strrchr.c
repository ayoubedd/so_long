/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:46:45 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/20 21:29:33 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		k;
	int		i;
	char	tc;

	k = 0;
	i = 0;
	tc = (char)c;
	while (s[k])
		k++;
	while (k >= 0)
	{
		if (s[k] == tc)
			return ((char *)s + k);
		k--;
	}
	return (NULL);
}
