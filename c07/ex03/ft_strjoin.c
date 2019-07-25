/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:06:28 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/23 17:18:14 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*s(int size, char **strs, char *sep)
{
	int *re;
	int tam;
	int i;
	int j;

	tam = 0;
	i = 0;
	j = 0;
	re = (int *)malloc(sizeof(int) * 2);
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			tam++;
		i++;
	}
	re[0] = tam;
	i = 0;
	while (sep[i])
		i++;
	re[1] = i;
	return (re);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*resp;
	int		*t;
	int		v[3];

	v[0] = 0;
	v[2] = 0;
	if (size > 0)
	{
		t = s(size, strs, sep);
		resp = (char *)malloc(sizeof(char) * (t[0] + (t[1] * (size - 1) + 1)));
		while (v[0] < size)
		{
			v[1] = 0;
			while (strs[v[0]][v[1]])
				resp[v[2]++] = strs[v[0]][v[1]++];
			v[1] = 0;
			if (size - 1 != v[0]++)
				while (sep[v[1]])
					resp[v[2]++] = sep[v[1]++];
		}
	}
	else
		resp = (char *)malloc(sizeof(char));
	resp[v[2]] = '\0';
	return (resp);
}
