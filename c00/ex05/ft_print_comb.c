/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 21:14:25 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/05 02:05:19 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wall(char p, char s, char t)
{
	if (p != s && p != t && s != t && p < s && s < t)
	{
		write(1, &p, 1);
		write(1, &s, 1);
		write(1, &t, 1);
		if (p == '7' && s == '8' && t == '9')
			NULL;
		else
			write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char t;
	char s;
	char p;

	p = '0';
	s = '0';
	t = '0';
	while (p <= '9')
	{
		while (s <= '9')
		{
			while (t <= '9')
			{
				wall(p, s, t);
				t++;
			}
			t = '0';
			s++;
		}
		s = '0';
		p++;
	}
}
