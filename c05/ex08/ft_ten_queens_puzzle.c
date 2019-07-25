/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 15:54:37 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/19 13:10:53 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check2(char *str, int i)
{
	int j;
	int u;
	int d;

	j = i + 1;
	u = str[i] + 1;
	d = str[i] - 1;
	while (j < 10)
	{
		if ((str[j] == u && u < 10) || (str[j] == d && d > -1))
			return (0);
		j++;
		u++;
		d--;
	}
	return (1);
}

int		check1(char *str, int i)
{
	int j;
	int u;
	int d;

	j = -1;
	while (j < 10)
		if (str[++j] == str[i] && j != i)
			return (0);
	j = i - 1;
	u = str[i] + 1;
	d = str[i] - 1;
	while (j > -1)
	{
		if ((str[j] == u && u < 10) || (str[j] == d && d > -1))
			return (0);
		j--;
		u++;
		d--;
	}
	return (1);
}

void	printrow(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = str[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		queenbackt(char *str, int i)
{
	int n;
	int r;

	r = 0;
	if (i == 10)
	{
		printrow(str);
		return (1);
	}
	if (str[i] == -1)
	{
		n = 0;
		while (n < 10)
		{
			str[i] = n;
			if (check1(str, i) && check2(str, i))
				r = r + queenbackt(str, i + 1);
			n++;
		}
		str[i] = -1;
	}
	return (r);
}

int		ft_ten_queens_puzzle(void)
{
	char	str[10];
	int		i;

	i = 0;
	while (i < 10)
	{
		str[i] = -1;
		i++;
	}
	return (queenbackt(str, 0));
}
