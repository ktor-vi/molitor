/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:37:00 by y randre          #+#    #+#             */
/*   Updated: 2023/08/23 19:35:36 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"
#include "../includes/ft_point.h"

struct s_point	find_square(struct s_map map, char obs);

void	ft_free(t_map *map)
{
	int	y;

	y = 0;
	while (y < map->rows)
	{
		free(map->map[y]);
		y++;
	}
	free(map->map);
}

void	invalid_handler(int argc, struct s_map map, int *i)
{
	write(1, "map error\n", 10);
	if (argc > 2 && *i != argc - 1)
		write(1, "\n", 1);
	if (argc == -2)
		ft_free_no(&map);
	else
		ft_free(&map);
	*i += 1;
}

void	else_handler(struct s_map map, int argc, int *i)
{
	t_point	point;

	point = find_square(map, map.obs);
	print_square(&map, point.x, point.y, point.len);
	if (argc > 2 && *i != argc - 1)
		write(1, "\n\n", 1);
	if (argc == -2)
		ft_free_no(&map);
	else
		ft_free(&map);
	*i += 1;
}

void	good_status(t_map map, char **argv, int argc, int i)
{
	int	y;

	y = -1;
	if (map.rows != 1)
	{
		map.map = malloc(sizeof(char *) * (map.rows + 1));
		if (!map.map)
			exit(1);
		while (++y < map.rows)
		{
			map.map[y] = malloc(sizeof(char) * map.cols);
			if (!map.map[y])
				exit(1);
		}
		ft_parsing(&map, argv[i]);
		if (!(ft_valid(map)))
			invalid_handler(argc, map, &i);
		else
			else_handler(map, argc, &i);
	}
	else
	{
		other_else_handler(argc, i);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_map	map;
	int		i;

	if (argc < 2)
		no_file(&map);
	i = 0;
	while (++i < argc)
	{
		map.rows = nbr_rows(argv[i]);
		map.cols = nbr_cols(argv[i]);
		good_status(map, argv, argc, i);
	}
	exit(0);
}
