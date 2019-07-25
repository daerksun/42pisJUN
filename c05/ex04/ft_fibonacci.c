/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 03:13:47 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/19 12:03:51 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else
	{
		if (index == 1)
			return (1);
		else
		{
			if (index > 0)
				return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
		}
	}
	return (-1);
}
