/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possible.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:57:15 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/13 11:45:15 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// tab[y][x]

int	no_dup_col(int x, int n, int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][x] == n)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	no_dup_row(int y, int n, int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[y][i] == n)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	no_dups(int x, int y, int n, int grid[4][4])
{
	if (no_dup_col(x, n, grid) && no_dup_row(y, n, grid))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
