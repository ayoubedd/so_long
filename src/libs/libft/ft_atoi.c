/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:23:09 by aeddaoud          #+#    #+#             */
/*   Updated: 2021/11/17 18:56:43 by aeddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*skipspaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' '
		|| str[i] == '\t'
		|| str[i] == '\r'
		|| str[i] == '\n'
		|| str[i] == '\v'
		|| str[i] == '\f')
		i++;
	return ((char *)&str[i]);
}

int	ft_atoi(const char *str)
{
	int		i;
	char	*tmp;
	long	total;

	i = 0;
	total = 0;
	tmp = skipspaces(str);
	if (*tmp == '-' || *tmp == '+')
		i++;
	while ((tmp[i] >= '0' && tmp[i] <= '9'))
	{
		if (((total * 10) + (tmp[i] - '0')) / 10 != total)
		{
			if (*tmp == '-')
				return (0);
			else
				return (-1);
		}
		total = (total * 10) + (tmp[i] - '0');
		i++;
	}
	if (*tmp == '-')
		total *= -1;
	return (total);
}
