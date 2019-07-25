/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:08:25 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/10 21:04:38 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check(char c)
{
	if (c < 32 || c > 127)
		return (0);
	else
		return (1);
}

void	ft_p(char c)
{
	write(1, &c, 1);
}

void	hexa(char c)
{
	char	g;
	char	bas[16];
	int		u;
	int		d;

	u = 0;
	while (u < 10)
	{
		bas[u] = u + 48;
		u++;
	}
	while (u < 16)
	{
		bas[u] = u + 87;
		u++;
	}
	g = '\\';
	u = c / 16;
	d = c % 16;
	ft_p(g);
	ft_p(bas[u]);
	ft_p(bas[d]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check(str[i]) == 0)
		{
			hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
