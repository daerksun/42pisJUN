/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:30:32 by mchardin          #+#    #+#             */
/*   Updated: 2019/07/20 18:34:31 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> //warning
int		ft_check_buf(char *buf);

int		ft_atoi(char *str)
{
	unsigned int		i;
	unsigned long		nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

int		ft_check_name(char *str)
{
	char	dict[13];
	int		i;

	i = 0;
	dict[0] = 'n';
	dict[1] = 'u';
	dict[2] = 'm';
	dict[3] = 'b';
	dict[4] = 'e';
	dict[5] = 'r';
	dict[6] = 's';
	dict[7] = '.';
	dict[8] = 'd';
	dict[9] = 'i';
	dict[10] = 'c';
	dict[11] = 't';
	dict[12] = '\0';
	while (i < 13)
	{
		if (str[i] != dict[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_dict(void)
{
	int fd;
	int ret;
	char *buf;

	if (!(buf = malloc(sizeof(*buf) * 999999999))) //size of doc
	   return (0);
		fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, buf, 999999999)))
		buf[ret] = '\0';
	if (!(ft_check_buf(buf)))
		return (0);
	if (close(fd) == -1)
		return (0);
	return (1);
}

int		ft_check_buf(char *buf)
{
	int i;
	int v;

	i = 0;
	v = 0;
	while (buf[i])
	{
		while (buf[i] != '\n')
		{
			if (buf[i] < '0' || buf[i] > '9')
				return (0);
			while (buf[i] >= '0' && buf[i] <= '9')
				i++;
			while (buf[i] == ' ')
				i++;
			if (buf[i] != ':')
				return (0);
			i++;
			while (buf[i] == ' ')
				i++;
			if (buf[i] < ' ' || buf[i] > '~')
				return (0);
			while (buf[i] >= ' ' && buf[i] <= '~')
				i++;
			v++;
		}
		i++;
		if (buf[i] == '\n')
			i++;
	}
	return (v);
}
