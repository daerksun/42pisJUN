/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:17:24 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/10 01:54:19 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
	{
		if (c == '\0')
			return (1);
		else
			return (2);
	}
}

int	ft_str_is_uppercase(char *str)
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
