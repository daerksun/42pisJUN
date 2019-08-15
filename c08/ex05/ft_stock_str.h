/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econtrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 19:27:19 by econtrer          #+#    #+#             */
/*   Updated: 2019/07/25 19:33:52 by econtrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}				t_stock_str;

t_stock_str *ft_strs_to_tab(int ac, char **av);

#endif

