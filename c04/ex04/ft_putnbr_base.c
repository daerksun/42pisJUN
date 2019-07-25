/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 03:39:14 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/17 17:47:47 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}

int		chbas(char *ba)
{
	int i;
	int j;
	int b;

	i = 0;
	b = 0;
	while (ba[i] && b == 0)
		if (ba[i] != '+' && ba[i] != '-')
		{
			j = i + 1;
			while (ba[j] && b == 0)
				if (ba[i] != ba[j])
					j++;
				else
					b = 1;
			i++;
		}
		else
			b = 1;
	if (b == 1)
		return (0);
	else
		return (i);
}

void	ft_bas_rec(long nbr, char *bas, int b)
{
	if (nbr < b)
		ft_putc(bas[nbr]);
	else
	{
		if (nbr / b != 0)
			ft_bas_rec(nbr / b, bas, b);
		ft_bas_rec(nbr % b, bas, b);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		b;

	n = nbr;
	b = chbas(base);
	if (b > 1)
	{
		if (n < 0)
		{
			ft_putc('-');
			ft_bas_rec((-1) * n, base, b);
		}
		else
			ft_bas_rec(n, base, b);
	}
}
