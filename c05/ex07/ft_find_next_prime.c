/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 11:45:40 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/18 15:31:11 by econtrer         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (ft_is_prime(i) == 0)
		i++;
	return (i);
}
