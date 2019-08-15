/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:09:31 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/25 19:51:40 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		i;
	char	*r;

	i = 0;
	while (src[i])
		i++;
	r = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (src[i])
	{
		r[i] = src[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

int			ft_size(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ret;
	int			i;

	i = 0;
	if (!(ret = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (i < ac)
	{
		ret[i].str = ft_strdup(av[i]);
		ret[i].copy = ft_strdup(av[i]);
		ret[i].size = ft_size(av[i]);
		i++;
	}
	ret[i].str = 0;
	return (ret);
}
