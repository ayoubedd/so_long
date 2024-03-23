/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:56:26 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/21 00:52:54 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_list(char **buff)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		free(buff[i]);
		i++;
	}
	free(buff);
}

static char	*ft_strndup(const char *s1, size_t start, size_t n)
{
	char	*buffer;
	size_t	i;

	buffer = (char *)malloc(n + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < n)
	{
		buffer[i] = s1[start + i];
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}

static int	chunks(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	chunks;

	i = 0;
	j = 0;
	chunks = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			i += j - 1;
			chunks++;
		}
		i++;
	}
	return (chunks);
}

static void	ft_insert(const char *s, char **buff, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			buff[k] = ft_strndup(s, i, j);
			if (!buff[k])
				free_list(buff);
			k++;
			i += j - 1;
		}
		i++;
	}
	buff[k] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tmp;

	if (!s)
		return (NULL);
	tmp = (char **)malloc(sizeof(char *) * (chunks(s, c) + 1));
	if (!tmp)
		return (NULL);
	ft_insert(s, tmp, c);
	return (tmp);
}
