/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:23:53 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/19 22:50:19 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbcount(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n / 10 > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr(char *dst, long c)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	j = 0;
	len = ft_nbcount(c);
	if (c < 0)
	{
		dst[0] = '-';
		c *= -1;
		j = 1;
	}
	while (len - i >= j)
	{
		dst[len - i] = (c % 10) + '0';
		c /= 10;
		i++;
	}
	dst[len] = 0;
}

char	*ft_itoa(int n)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * ft_nbcount(n) + 1);
	if (!tmp)
		return (0);
	ft_putnbr(tmp, n);
	return (tmp);
}
