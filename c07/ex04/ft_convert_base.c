/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:43:40 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/24 19:35:05 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_putnbr_base(int nbr, char *base);
int		chbas(char *ba);

long	isbase(char c, char *b)
{
	int i;

	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long	conv(char *str, int v[3], char *ba)
{
	long	r;
	int		p;
	int		c;
	int		b;

	r = 0;
	c = 1;
	p = 1;
	b = chbas(ba);
	if (b > 1)
	{
		while (v[2] > 0)
		{
			r = r + ((isbase(str[v[0] - c], ba)) * p);
			p = p * b;
			c++;
			v[2]--;
		}
		if (v[1] % 2 == 1)
			r = r * (-1);
		return (r);
	}
	else
		return (2147483648);
}

long	ft_atoi_base(char *str, char *base)
{
	int v[3];

	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	while (str[v[0]] == ' ' || str[v[0]] == '\t' || str[v[0]] == '\n' ||
			str[v[0]] == '\v' || str[v[0]] == '\f' || str[v[0]] == '\r')
		v[0]++;
	while (str[v[0]] == '-' || str[v[0]] == '+')
	{
		if (str[v[0]] == '-')
			v[1]++;
		v[0]++;
	}
	while (isbase(str[v[0]], base) >= 0)
	{
		v[2]++;
		v[0]++;
	}
	if (v[2] == 0)
		return (2147483648);
	else
		return (conv(str, v, base));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_toi)
{
	long n;

	n = ft_atoi_base(nbr, base_from);
	if (n < -2147483648 || n > 2147483647)
		return (NULL);
	return (ft_putnbr_base(n, base_toi));
}
