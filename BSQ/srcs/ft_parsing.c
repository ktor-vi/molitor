/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:30:15 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/23 19:13:40 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"
#include <fcntl.h>
#include <unistd.h>

void	check_number_char(t_map *map)
{
	int	y;

	if (map->empty > 47 && map->empty < 58)
	{
		y = 0;
		while (y < map->rows)
		{
			free(map->map[y]);
			y++;
		}
		map->rows = (map->rows / 10) + 1;
		y = -1;
		if (map->empty == '9')
			map->rows -= 1;
		free(map->map);
		if (map->rows != 0)
			map->map = malloc(sizeof(char *) * (map->rows + 1));
		if (!map->map)
			exit(1);
		while (++y < map->rows)
			map->map[y] = malloc(sizeof(char) * map->cols);
		if (!map->map[y])
			exit(1);
	}
}

void	check_number_char_no(t_map *map)
{
	if (map->empty > 47 && map->empty < 58)
	{
		map->rows = (map->rows / 10);
	}
}

void	parse_while(char *path, t_map *map)
{
	int	x;
	int	y;
	int	chan;

	chan = open(path, O_RDONLY);
	if (chan == -1)
		return ;
	y = 0;
	x = 0;
	while (read(chan, &map->map[y][x], 1) > 0)
	{
		if (map->map[y][x] != '\n' && map->map[y][x] != '\0')
			x++;
		else
		{
			y++;
			x = 0;
		}
	}
}

void	ft_parsing(t_map *map, char *path)
{
	int		x;
	int		temp;
	char	*str;

	temp = open(path, O_RDONLY);
	str = malloc(sizeof(char) * 2048);
	if (!str)
		exit(1);
	x = 0;
	while (read(temp, &str[x], 1) > 0)
	{
		if (str[x] == '\n')
			break ;
		x++;
	}
	close(temp);
	map->empty = get_empty(str);
	map->obs = get_obs(str);
	map->full = get_full(str);
	free(str);
	check_number_char(map);
	parse_while(path, map);
}
