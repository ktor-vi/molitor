/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 20:15:08 by badam             #+#    #+#             */
/*   Updated: 2019/06/09 16:06:13 by badam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);	

int		main(void)
{
	int a, *b, **c, ***d, ****e, *****f, ******g, *******h, ********i, *********j;


	j = &i;
	i = &h;
	h = &g;
	g = &f;
	f = &e;
	e = &d;
	d = &c;
	c = &b;
	b = &a;

	ft_ultimate_ft(j);
	if (a == 42)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
