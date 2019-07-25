/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictcall.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:13:42 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/20 17:24:13 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	dictcall(int nb);

int	zeroz(int nb, int max)
{
	int d;
	int r;

	d = max / 10;
	r = 0;
	if (d == 10)
		printf(" %d ", (nb / 10) * 10);
	else
	{
		printf(" %d ", (nb / d));
		printf(" %d ", d);
	}
	d = nb % d;
	if (d != 0)
		r = dictcall(d);
	return (r);
}

int	lotzero(int nb, int max)
{
	int r;
	int d;

	r = dictcall(nb / max);
	printf(" %d ", max);
	d = nb % max;
	if (d != 0)
		r = dictcall(nb % max);
	return (r);
}

int	dictcall(int nb)
{
	int u;
	int d;
	int r;

	r = 0;
	if (nb < 20)
	{
		printf(" %d ", nb);
		return (1);
	}
	else if (nb < 100)
		r = zeroz(nb, 100);
	else if (nb < 1000)
		r = zeroz(nb, 1000);
	else if (nb < 1000000)
		r = lotzero(nb, 1000);
	else if (nb < 1000000000)
		r = lotzero(nb, 1000000);
	else
		r = lotzero(nb, 1000000000);
	return (r);
}

int	main(int argc, char **av)
{
	printf("\n\n%d\n", dictcall(atoi(av[1])));
}
