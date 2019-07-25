/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchardin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:28:45 by mchardin          #+#    #+#             */
/*   Updated: 2019/07/20 17:59:48 by mchardin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> //warning

int		ft_atoi(char *str);
int		ft_check_name(char *str);
int		ft_check_dict(void);

int		main(int argc, char **argv)
{
	int nb;

	nb = ft_atoi(argv[argc - 1]);
	if (nb == -1 || argc > 3 || (argc == 3 && !(ft_check_name(argv[1])))
			|| !(ft_check_dict()))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	printf("%d", nb); //warning
	return (0);
}
