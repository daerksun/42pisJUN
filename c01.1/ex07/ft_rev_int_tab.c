/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 02:10:57 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/07 12:06:15 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int aux[size];
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (j >= 0)
	{
		aux[j] = tab[i];
		i++;
		j--;
	}
	i--;
	while (i >= 0)
	{
		tab[i] = aux[i];
		i--;
	}
}