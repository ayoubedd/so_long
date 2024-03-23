/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:39:04 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/27 18:44:21 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*tmp;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	tmp = ft_calloc(sizeof(char), len);
	if (!tmp)
		return (NULL);
	if (s1)
		ft_strlcat(tmp, s1, len);
	if (s2)
		ft_strlcat(tmp, s2, len);
	return (tmp);
}
