/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:51:20 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/13 16:09:26 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_view_colup(int x, int grid[4][4], int views[]);
int	check_view_coldown(int x, int grid[4][4], int views[]);
int	check_view_rowleft(int y, int grid[4][4], int views[]);
int	check_view_rowright(int y, int grid[4][4], int views[16]);

int	check_view_colup_final(int x, int grid[4][4], int views[])
{
	int	count;
	int	i;
	int	max;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (grid[i][x] > max)
		{
			max = grid[i][x];
			count++;
		}
		i++;
	}
	if (count == views[x])
		return (1);
	// printf("View CU ok\n");
	return (0);
}

int	check_view_coldown_final(int x, int grid[4][4], int views[])
{
	int	count;
	int	i;
	int	max;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (grid[i][x] > max)
		{
			max = grid[i][x];
			count++;
		}
		i--;
	}
	if (count == views[x + 4])
		return (1);
	// printf("View CD ok\n");
	return (0);
}

int	check_view_rowleft_final(int y, int grid[4][4], int views[])
{
	int	count;
	int	i;
	int	max;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (grid[y][i] > max)
		{
			max = grid[y][i];
			count++;
		}
		i++;
	}
	if (count == views[y + 8])
		return (1);
	// printf("View RL ok\n");
	return (0);
}

int	check_view_rowright_final(int y, int grid[4][4], int views[16])
{
	int	count;
	int	i;
	int	max;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (grid[y][i] > max)
		{
			max = grid[y][i];
			count++;
		}
		i--;
	}
	if (count == views[y + 12])
		return (1);
	// printf("View RR ok\n");
	return (0);
}

int	check_views_final(int grid[4][4], int views[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (!check_view_colup_final(j, grid, views) || !check_view_coldown_final(j,
					grid, views))
			{
				return (0);
			}
			j++;
		}
		if (!check_view_rowleft_final(i, grid, views) || !check_view_rowright_final(i, grid,
				views))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
