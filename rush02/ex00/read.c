/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 17:48:02 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/21 17:12:02 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

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

int filltab(int *keys, char **print, char *buf)
{
	int i;
	int j;
	int k;
	int aux;
	char *aux2;

	i = 0;
	j = 0;
	k = 0;
	while (buf[i])
	{
		aux = 0;
		while (buf[i] != ':' && buf[i] != ' ')
		{
			aux = (aux * 10) + (buf[i] - 48);
			printf("\n%d", aux);
			i++;
		}
		keys[j] = (int)malloc(4);
		keys[j] = aux
		while (buf[i] == ':' || buf[i] == ' ')
			i++;
		while (buf[i] != '\n')
		{
			aux2[k] = buf[i];
			k++;
			i++;
		}
		aux2[k] = '\0';
		/*print[j] = (char *)malloc(sizeof(char) * k);
		k = 0;
		while (aux2[k])
		{
			print[j][k] = aux2[k];
			k++;
		}
		print[j][k] = '\0';*/
		k = 0;
		i++;
		j++;

	}
	return (0);
}

int main()
{
	int fd;
	int ret;
	int *keys;
	char **print;
	char *buf;

	buf = (char *)malloc(4);
	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error", 5);
		return (1);
	}
	ret = read(fd, buf, 1000);
	buf[ret] = '\0';
	filltab(keys, print, buf);
	return (0);
}
