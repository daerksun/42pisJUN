/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:04:50 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/17 18:21:28 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isbase(char c, char *b);

int	chbas(char *ba)
{
	int i;
	int j;
	int b;

	i = 0;
	b = 0;
	while (ba[i] && b == 0)
		if (ba[i] != '+' && ba[i] != '-' &&
				ba[i] != ' ' && ba[i] != '\t' &&
				ba[i] != '\n' && ba[i] != '\v' &&
				ba[i] != '\f' && ba[i] != '\r')
		{
			j = i + 1;
			while (ba[j] && b == 0)
				if (ba[i] != ba[j])
					j++;
				else
					return (0);
			i++;
		}
		else
			return (0);
	return (i);
}

int	conv(char *str, int v[3], char *ba)
{
	int r;
	int p;
	int c;
	int b;

	r = 0;
	c = 1;
	p = 1;
	b = chbas(ba);
	if (b > 1)
	{
		while (v[2] > 0)
		{
			r = r + ((isbase(str[v[0] - c], ba)) * p);
			p = p * b;
			c++;
			v[2]--;
		}
		if (v[1] % 2 == 1)
			r = r * (-1);
		return (r);
	}
	else
		return (0);
}

int	isbase(char c, char *b)
{
	int i;

	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int v[3];

	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	while (str[v[0]] == ' ' || str[v[0]] == '\t' || str[v[0]] == '\n' ||
			str[v[0]] == '\v' || str[v[0]] == '\f' || str[v[0]] == '\r')
		v[0]++;
	while (str[v[0]] == '-' || str[v[0]] == '+')
	{
		if (str[v[0]] == '-')
			v[1]++;
		v[0]++;
	}
	while (isbase(str[v[0]], base) >= 0)
	{
		v[2]++;
		v[0]++;
	}
	if (v[2] == 0)
		return (0);
	else
		return (conv(str, v, base));
}
