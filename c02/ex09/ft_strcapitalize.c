/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:50:06 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/10 14:18:59 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		car_val(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	else
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			return (2);
		else
		{
			if (str[i] >= '0' && str[i] <= '9')
				return (3);
			else
				return (0);
		}
	}
}

void	camb(char *str, int i, int t, int *b)
{
	if (t == 1 && *b == 0)
	{
		str[i] = str[i] - 32;
		*b = 1;
	}
	if (t == 2 && *b == 1)
		str[i] = str[i] + 32;
	if (t >= 2 && *b == 0)
		*b = 1;
}

char	*ft_strcapitalize(char *str)
{
	int b;
	int i;
	int t;

	i = 0;
	b = 0;
	while (str[i] != '\0')
	{
		t = car_val(str, i);
		if (t > 0)
			camb(str, i, t, &b);
		else
			b = 0;
		i++;
	}
	return (str);
}
