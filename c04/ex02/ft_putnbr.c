/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 06:04:19 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/17 17:38:45 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long u;

	u = nb;
	if (u < 0)
	{
		ft_putc('-');
		u = u * -1;
	}
	if (u < 10)
		ft_putc(u + 48);
	else
	{
		ft_putnbr(u / 10);
		ft_putnbr(u % 10);
	}
}
