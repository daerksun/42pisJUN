/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 20:41:21 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/07 23:35:30 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pat(int c, int r, int x, int y)
{
	if (r == 1 || r == y)
	{
		if (c == 1 || c == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (c == 1 || c == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int r;
	int c;

	r = 1;
	c = 1;
	while (r <= y)
	{
		while (c <= x)
		{
			pat(c, r, x, y);
			c++;
		}
		ft_putchar('\n');
		c = 1;
		r++;
	}
}
