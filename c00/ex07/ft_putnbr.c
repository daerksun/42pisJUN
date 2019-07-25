/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 12:45:13 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/06 17:25:55 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	w_digit(int n)
{
	char r;

	r = '0';
	while (n != 0)
	{
		r++;
		n--;
	}
	write(1, &r, 1);
}

void	ft_putnbr(int nb)
{
	int u;
	int d;

	if (nb < 10)
	{
		w_digit(nb);
	}
	else
	{
		u = nb / 10;
		d = nb % 10;
		ft_putnbr(u);
		ft_putnbr(d);
	}
}
