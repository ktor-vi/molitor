/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:05:52 by randre            #+#    #+#             */
/*   Updated: 2023/08/23 18:45:45 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"

int	check_same(t_map map)
{
	if (map.empty == map.full || map.empty == map.obs || map.full == map.obs)
		return (1);
	return (0);
}

int	check_print(t_map map)
{
	if (map.empty < 32 || map.empty > 126)
		return (0);
	if (map.full < 32 || map.full > 126)
		return (0);
	if (map.obs < 32 || map.obs > 126)
		return (0);
	return (1);
}

int	check_val(t_map map)
{
	if (map.cols == 0 || map.rows == 0)
		return (0);
	return (1);
}

int	ft_valid(t_map map)
{
	int	y;
	int	x;

	y = 1;
	if (!(check_val(map)))
		return (0);
	while (y < map.rows)
	{
		x = 0;
		if (str_len(map.map[y]) != map.cols)
			return (0);
		if (map.map[y][map.cols] != '\n')
			return (0);
		while (x < map.cols)
		{
			if (map.map[y][x] != map.empty && map.map[y][x] != map.obs)
				return (0);
			x++;
		}
		y++;
	}
	if (check_same(map) || !(check_print(map)))
		return (0);
	return (1);
}
