/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:41:09 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/25 19:52:11 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		u;
	int		d;
	char	c;

	if (nb < 10)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	else
	{
		u = nb / 10;
		d = nb % 10;
		ft_putnbr(u);
		ft_putnbr(d);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(t_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

#include <stdlib.h>
char    *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);
}


int	main()
{
	int i;
	char **print;
	char *sep;
	char *resp;
	int xize;

	i = 0;
	print = (char **)malloc(sizeof(char *) * 13);
	while (i < 11)
		if (!(print[i++] = (char *)malloc(sizeof(char) * 200)))
			return (0);
	sep = (char *)malloc(sizeof(char )*10);
	ft_strcpy(sep, " : ");
	ft_strcpy(print[0], "la");
	ft_strcpy(print[1], "calma");
	ft_strcpy(print[2], "insola");
	ft_strcpy(print[3], "los");
	ft_strcpy(print[4], "PUNTOS");
	ft_strcpy(print[5], "catarticos");
	ft_strcpy(print[6], "que");
	ft_strcpy(print[7], "incitan");
	ft_strcpy(print[8], "a");
	ft_strcpy(print[9], "la nueva");
	ft_strcpy(print[10], "ley");
	xize = 11;

	ft_show_tab(ft_strs_to_tab(xize, print));
}
