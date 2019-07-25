/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 07:22:49 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/19 11:01:37 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

char	**sortl(int c, char **arg)
{
	char	**r;
	char	*aux;
	int		i;
	int		j;

	r = arg;
	i = 0;
	while (i < c)
	{
		j = i + 1;
		while (j < c)
		{
			if (r[i][0] > r[j][0])
			{
				aux = r[i];
				r[i] = r[j];
				r[j] = aux;
			}
			j++;
		}
		i++;
	}
	return (r);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**m;

	j = 1;
	m = sortl(argc, argv);
	while (j < argc)
	{
		i = 0;
		while (m[j][i])
			putc(m[j][i++]);
		putc('\n');
		j++;
	}
}
