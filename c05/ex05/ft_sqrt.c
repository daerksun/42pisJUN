/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 03:43:47 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/18 14:24:45 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb > 0)
	{
		while (i * i <= nb && i < 46341)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}