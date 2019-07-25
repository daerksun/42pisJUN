/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 15:47:28 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/12 13:43:03 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	same(char *str, char *to_find, int *v)
{
	v[3] = v[0];
	while (str[v[0]] == to_find[v[1]] && to_find[v[1]] && str[v[0]])
	{
		v[0] = v[0] + 1;
		v[1] = v[1] + 1;
	}
	if (to_find[v[1]] == '\0')
		v[2] = 1;
	else
	{
		if (str[v[0]] == to_find[v[1]])
		{
			v[1] = 0;
			v[0] = v[0] + 1;
		}
	}
}

void	ext(int *v)
{
	if (v[1] != 0)
		v[1] = 0;
	else
		v[0] = v[0] + 1;
}

char	*ft_strstr(char *str, char *to_find)
{
	int v[4];

	v[0] = 0;
	v[1] = 0;
	v[2] = 0;
	if (to_find[v[1]] == '\0')
		return (str);
	else
	{
		while (str[v[0]] && v[2] == 0)
		{
			if (str[v[0]] == to_find[v[1]])
				same(str, to_find, v);
			else
				ext(v);
		}
		if (v[2] == 1)
			return (&str[v[3]]);
		else
			return (0);
	}
}
