/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:00:07 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/13 17:40:06 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		no_dups(int x, int y, int n, int grid[4][4]);
int		check_views(int x, int y, int grid[4][4], int views[16]);
void	print_temp(int grid[4][4]);
int		solve_inner(int j, int i, int grid[4][4], int views[16]);
int		check_views_curl(int x, int y, int grid[4][4], int views[16]);
int		check_views_final(int grid[4][4], int views[16]);

void	solve(int grid[4][4], int views[16])
{
	int			i;
	int			j;
	int static	no_solution = 0;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (grid[i][j] == 0)
			{
				if (solve_inner(j, i, grid, views) == 1)
					return;
			}
			j++;
		}
		j = 0;
		i++;
	}
	if (check_views_final(grid, views))
	{
		print_temp(grid);
		no_solution = 1;
	}
}

int	solve_inner(int j, int i, int grid[4][4], int views[16])
{
	int	k;

	k = 1;
	while (k <= 4)
	{
		if (no_dups(j, i, k, grid) == 1)
		{
			grid[i][j] = k;
			if (check_views_curl(j, i, grid, views) == 1)
			{
				solve(grid, views);
			}
			grid[i][j] = 0;
		}
		k++;
	}
	return (1);
}

int	main(void)
{
	int	views[16] = {2, 4, 2, 1, 2, 1, 3, 3, 3, 3, 1, 2, 1, 2, 4, 4};
	int	grid[4][4]  = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

	solve(grid, views);
	if (no_solution == 0)
		 printf("Error.");
}
