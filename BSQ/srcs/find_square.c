/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:46:38 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/23 17:43:04 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"
#include "../includes/ft_point.h"

int	grow_square(int i, int j, struct s_map map, char obs)
{
	int	len;
	int	x;
	int	y;

	len = 1;
	while (i + len < map.cols && j + len < map.rows)
	{
		x = i + len;
		y = j + len;
		while (y >= j && map.map[y][x] != obs)
			y--;
		if (y >= j)
			return (len);
		while (x >= i && map.map[j + len][x] != obs)
			x--;
		if (x >= i)
			return (len);
		len++;
	}
	return (len);
}

struct s_point	init_point(void)
{
	struct s_point	bigsq_point;

	bigsq_point.x = 0;
	bigsq_point.y = 1;
	bigsq_point.len = 1;
	return (bigsq_point);
}

struct s_point	find_square(struct s_map map, char obs)
{
	int				i;
	int				j;
	struct s_point	bigsq_point;

	i = -1;
	j = 0;
	bigsq_point = init_point();
	while (++j < map.rows)
	{
		while (++i < map.cols)
		{
			if (map.map[j][i] != obs)
			{
				if (grow_square(i, j, map, obs) > bigsq_point.len)
				{
					bigsq_point.x = i;
					bigsq_point.y = j;
					bigsq_point.len = grow_square(i, j, map, obs);
				}
			}
		}
		i = -1;
	}
	return (bigsq_point);
}
