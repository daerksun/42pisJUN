/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 20:26:58 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/08 00:04:34 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pat(int c, int r, int x, int y)
{
	if (c == 1 && (r == 1 || r == y))
	{
		ft_putchar('A');
	}
	else
	{
		if (c == x && (r == 1 || r == y))
		{
			ft_putchar('C');
		}
		else
		{
			if (c == 1 || c == x || r == 1 || r == y)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
		}
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
