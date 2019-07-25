/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 01:43:22 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/24 15:33:50 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;
	int val;

	i = 0;
	val = min;
	if (min < max)
	{
		if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
			return (-1);
		while (i < max - min)
		{
			tab[i] = val;
			val++;
			i++;
		}
		*range = tab;
	}
	else
		*range = NULL;
	return (i);
}
