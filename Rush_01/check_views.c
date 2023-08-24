/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:51:20 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/13 16:09:28 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	check_view_colup(int x, int grid[4][4], int views[])
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
	if (count > views[x])
		return (0);
	//printf("View CU ok\n");
	return (1);
}

int	check_view_coldown(int x, int grid[4][4], int views[])
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
	if (count > views[x + 4])
		return (0);
	//printf("View CD ok\n");
	return (1);
}

int	check_view_rowleft(int y, int grid[4][4], int views[])
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
	if (count > views[y + 8])
		return (0);
	//printf("View RL ok\n");
	return (1);
}

int	check_view_rowright(int y, int grid[4][4], int views[16])
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
	if (count > views[y + 12])
		return (0);
	//printf("View RR ok\n");
	return (1);
}

int	check_views_curl(int x, int y, int grid[4][4], int views[16])
{
	if (check_view_colup(x, grid, views) && check_view_rowleft(y, grid, views))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
