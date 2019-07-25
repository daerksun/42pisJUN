/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 23:25:49 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/25 11:08:11 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size(char *r)
{
	int i;

	i = 0;
	while (r[i])
		i++;
	return (i);
}

char	*llena(char *str, char *charset, int t[2], int size)
{
	int		i;
	char	*r;

	i = 0;
	r = (char *)malloc(sizeof(char) * (size + 3));
	r[i++] = charset[t[0]++];
	while (i <= size && str[t[1]])
		r[i++] = str[t[1]++];
	if (charset[t[0]])
		r[i++] = charset[t[0]++];
	r[i] = '\0';
	return (r);
}

char	**ft_split(char *str, char *charset)
{
	int		s1;
	int		s2;
	int		i;
	int		t[2];
	char	**resp;

	s1 = size(charset);
	s2 = size(str);
	i = 0;
	t[0] = 0;
	t[1] = 0;
	while (s1 % 2 != 0)
		s1++;
	while (s2 % (s1 / 2) != 0)
		s2++;
	resp = (char **)malloc(sizeof(char *) * ((s1 / 2) + 1));
	while (i < s1 / 2)
	{
		resp[i] = llena(str, charset, t, s2 / (s1 / 2));
		i++;
	}
	resp[i] = (char *)malloc(sizeof(char) * 2);
	resp[i][0] = '0';
	resp[i][1] = '\0';
	return (resp);
}
