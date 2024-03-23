/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <aeddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:33 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/29 17:47:11 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr_gnl(const char *s, int c)
{
	int		i;
	int		j;
	char	tc;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	tc = (char)c;
	while (s[j])
		j++;
	while (i < j + 1)
	{
		if (s[i] == tc)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

char	*ft_strcpy_gnl(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin_gnl(char *s1, char *s2, int s1mode, int s2mode)
{
	size_t	j;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	j = ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1;
	str = (char *)malloc(j * sizeof(char));
	if (!str)
		return (NULL);
	ft_strcpy_gnl(str, s1);
	ft_strcpy_gnl(&str[ft_strlen_gnl(s1)], s2);
	if (s1mode && s1)
		free(s1);
	if (s2mode && s2)
		free(s2);
	return (str);
}
