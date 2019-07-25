/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:40:04 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/14 17:35:50 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_printc(char c)
{
	write(1, &c, 1);
}

int	fill(int *tab, char *ac)
{
	int f;
	int c;
	int r;

	f = 0;
	c = 0;
	r = 0;

	while(ac[c])
	{
		if(ac[c] != ' ')
		{
			tab[f] = ac[c];
			f++;
		}
		c++;
	}
	return (f);
}

int		main(int argc, char **ac)
{
	int *cond, f=0;

	cond = malloc(sizeof(int) * 16);

	if (argc == 2 && fill(cond, ac[1]) == 16)
	{
		ft_printc('b');
	}
	else
	{
		ft_printc('e');
	}
	return (argc);
}
