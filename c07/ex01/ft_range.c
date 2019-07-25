/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 01:08:13 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/25 11:04:33 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ret;
	int val;
	int i;

	if (min < max)
	{
		val = min;
		i = 0;
		ret = (int *)malloc(sizeof(int) * (max - min));
		while (i < max - min)
		{
			ret[i] = val;
			val++;
			i++;
		}
	}
	else
		return (0);
	return (ret);
}
