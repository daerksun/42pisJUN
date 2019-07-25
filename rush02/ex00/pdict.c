/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pdict.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:54:43 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/23 15:14:53 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
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

void	ft_prints(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		pdict(int *keys, char **print, int s)
{
	int i;

	i = 0;
	while (keys)
	{
		if(s == keys[i])
		{
			ft_prints(print[i]);
			return (1);
		}
		i++;
	}
	return (0);
}

int main()
{
	int i;
	int keys[20];
	char **print;
	
	i = 0;
	print = (char **)malloc(460);
	while (i < 11)
	{
		print[i] = (char *)malloc(460);
		keys[i] = i;
		i++;
	}
	keys[2] = 234;
	ft_strcpy(print[0], "hola");
	ft_strcpy(print[1], "h");
	ft_strcpy(print[2], "ls");
	ft_strcpy(print[3], "rfrfrfrfr");
	ft_strcpy(print[4], "432");
	ft_strcpy(print[5], " ");
	ft_strcpy(print[6], "efef");
	ft_strcpy(print[7], "wfweffwef");
	ft_strcpy(print[8], "ho");
	ft_strcpy(print[9], "hol");
	ft_strcpy(print[10], "bien wey");
	i = pdict(keys, print, 10);
}
