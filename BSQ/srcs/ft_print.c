/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:08:50 by randre            #+#    #+#             */
/*   Updated: 2023/08/23 20:44:41 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"

void	true_print(struct s_map map)
{
	int	x;
	int	y;

	y = 1;
	while (y != map.rows)
	{
		x = 0;
		while (x < map.cols)
		{
			write(1, &map.map[y][x], 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

void	print_square(t_map *map, int x, int y, int len)
{
	int	i;
	int	base_x;
	int	j;

	i = 0;
	base_x = x;
	while (i != len)
	{
		j = 0;
		x = base_x;
		while (j != len)
		{
			if (map->map[y][x] != map->obs)
				map->map[y][x] = map->full;
			j++;
			x++;
		}
		y++;
		i++;
	}
	true_print(*map);
}
