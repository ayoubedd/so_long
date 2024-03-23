/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:59:32 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/19 13:59:32 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:54:05 by aeddaoud          #+#    #+#             */
/*   Updated: 2022/03/19 13:54:05 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:16:05 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/12/07 12:48:56 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_toupper_pf(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	ft_putchar_pf(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_puthex_pf(unsigned long n, int *count, int mode)
{
	const char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_puthex_pf(n / 16, count, mode);
	if (mode)
		ft_putchar_pf(ft_toupper_pf(hex[n % 16]), count);
	else
		ft_putchar_pf(hex[n % 16], count);
}

void	ft_putstr_pf(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_pf("(null)", count);
		return ;
	}
	while (str[i])
	{
		ft_putchar_pf(str[i], count);
		i++;
	}
}

void	ft_putnbr_pf(long n, int *count)
{
	if (n < 0)
	{
		ft_putchar_pf('-', count);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_pf(n / 10, count);
	ft_putchar_pf(n % 10 + '0', count);
}
