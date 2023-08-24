/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:00:28 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/23 20:35:58 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"

void	invalid_handler(int argc, struct s_map map, int *i);
void	else_handler(struct s_map map, int argc, int *i);

void	ft_free_no(t_map *map)
{
	int	y;

	y = 0;
	while (y < 2048)
	{
		free(map->map[y]);
		y++;
	}
	free(map->map);
}

void	next(t_map *map)
{
	int	i;

	i = 0;
	if (!(ft_valid(*map)))
		invalid_handler(-2, *map, &i);
	else
		else_handler(*map, -2, &i);
}

void	no_file_malloc(t_map *map)
{
	int	y;

	y = -1;
	map->map = malloc(sizeof(char *) * 2048);
	if (!map->map)
		exit(1);
	while (++y < 2048)
	{
		map->map[y] = malloc(sizeof(char) * 2048);
		if (!map->map)
			exit(1);
	}
}

int	no_file_while(t_map *map)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (y < map->rows + 1)
	{
		read(0, &map->map[y][x], 1);
		if (map->map[y][x] != '\n' && map->map[y][x] != '\0')
		{
			x++;
		}
		else
		{
			map->cols = x;
			y++;
			x = 0;
		}
	}
	return (y);
}

void	no_file(t_map *map)
{
	int		x;
	int		y;
	char	*str;

	str = malloc(sizeof(char) * 2048);
	if (!str)
		exit(1);
	x = 0;
	while (read(0, &str[x], 1) > 0)
	{
		if (str[x] == '\n')
			break ;
		x++;
	}
	map->rows = nbr_rowsnf(str) - 1;
	map->empty = get_empty(str);
	map->obs = get_obs(str);
	map->full = get_full(str);
	free(str);
	check_number_char_no(map);
	no_file_malloc(map);
	y = no_file_while(map);
	map->map[y][0] = 0;
	map->rows += 1;
	next(map);
}
