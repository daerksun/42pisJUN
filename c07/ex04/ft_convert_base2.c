/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:26:12 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/24 19:35:08 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <unistd.h>

int		chbas(char *ba)
{
	int i;
	int j;
	int b;

	i = 0;
	b = 0;
	while (ba[i] && b == 0)
		if (ba[i] != '+' && ba[i] != '-' &&
				ba[i] != ' ' && ba[i] != '\t' &&
				ba[i] != '\n' && ba[i] != '\v' &&
				ba[i] != '\f' && ba[i] != '\r')
		{
			j = i + 1;
			while (ba[j] && b == 0)
				if (ba[i] != ba[j])
					j++;
				else
					return (0);
			i++;
		}
		else
			return (0);
	return (i);
}

void	ft_bas_rec(long nbr, char *bas, int v[3], char *resp)
{
	if (nbr < v[0])
		resp[v[1]++] = bas[nbr];
	else
	{
		if (nbr / v[0] != 0)
			ft_bas_rec(nbr / v[0], bas, v, resp);
		ft_bas_rec(nbr % v[0], bas, v, resp);
	}
}

int		size(char *r)
{
	int i;

	i = 0;
	while (r[i])
		i++;
	return (i);
}

char	*goodend(char *res, int v[3])
{
	char *fin;

	res[v[1]] = '\0';
	v[2] = size(res);
	fin = (char *)malloc(sizeof(char) * (v[2] + 1));
	fin = res;
	free(res);
	return (fin);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		v[3];
	char	*res;

	n = nbr;
	v[0] = chbas(base);
	res = (char *)malloc(sizeof(char) * 100);
	if (v[0] > 1)
	{
		v[1] = 0;
		if (n < 0)
		{
			res[v[1]++] = '-';
			ft_bas_rec((-1) * n, base, v, res);
		}
		else
			ft_bas_rec(n, base, v, res);
		res[v[1]] = '\0';
		return (goodend(res, v));
	}
	else
		return (char *)malloc(0);
}
