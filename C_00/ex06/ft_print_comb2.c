/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:53:48 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/03 10:39:53 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_double(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	inner_loop(char g, char h, char i, char j)
{
	while (i <= '9')
	{
		while (j <= '9')
		{
			ft_print_double(g, h);
			write(1, " ", 1);
			if (i == '9' && j == '9' && g == '9' && h == '8')
			{
				ft_print_double(i, j);
			}
			else
			{
				ft_print_double(i, j);
				write(1, ",  ", 2);
			}
			j++;
		}
		i++;
		j = '0';
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	g;
	char	h;

	i = '0';
	j = '1';
	g = '0';
	h = '0';
	while (g <= '9')
	{
		while (h <= '9')
		{
			inner_loop(g, h, i, j);
		}
		h++;
		i = g;
		j = h;
		j++;
	}
	g++;
	h = '0';
	i = '0';
	j = h + '1';
}
