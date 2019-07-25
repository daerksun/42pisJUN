/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:22:22 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/08 14:26:28 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char c)
{
	if (c >= ' ' && c <= '~')
		return (0);
	else
	{
		if (c == '\0')
			return (1);
		else
			return (2);
	}
}

int	ft_str_is_printable(char *str)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (b == 0)
	{
		b = check(str[i]);
		i++;
	}
	if (b == 1)
		return (1);
	else
		return (0);
}
