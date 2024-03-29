/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:41:09 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/18 15:02:23 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb > 2)
	{
		if (nb % 2 == 0)
			return (0);
		while (i < nb && i < 46342)
		{
			if (nb % i == 0)
				return (0);
			i += 2;
		}
		return (1);
	}
	return (0);
}
