/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 06:34:41 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/19 06:57:28 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **av)
{
	int i;

	i = 0;
	while (av[0][i])
		putc(av[0][i++]);
	putc('\n');
	return (argc);
}
