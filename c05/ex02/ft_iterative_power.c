/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 02:10:13 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/19 11:34:55 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int r;

	r = 1;
	i = power;
	if (power == 0)
		return (1);
	if (power > 0)
	{
		while (i > 0)
		{
			r = r * nb;
			i--;
		}
		return (r);
	}
	else
		return (0);
}
