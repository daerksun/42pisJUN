/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:57:47 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/16 13:08:38 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	conv(char *str, int i, int s, int n)
{
	int r;
	int p;
	int c;

	r = 0;
	c = 1;
	p = 1;
	while (n > 0)
	{
		r = r + ((str[i - c] - 48) * p);
		p = p * 10;
		c++;
		n--;
	}
	if (s % 2 == 1)
		r = r * (-1);
	return (r);
}

int	espacio(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int s;
	int n;

	i = 0;
	s = 0;
	n = 0;
	while (espacio(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n++;
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (conv(str, i, s, n));
}
