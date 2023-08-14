/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:00:07 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/13 13:38:15 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int		no_dups(int x, int y, int n, int grid[4][4]);
int		check_views(int x, int y, int grid[4][4], int views[16]);
void	print_temp(int grid[4][4]);

void	solve(int grid[4][4], int views[16])
{
	int	i;
	int	j;
	int	k;

	k = 1;
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (grid[i][j] == 0)
			{
				while (k <= 4)
				{
					if (no_dups(j, i, k, grid) == 1)
					{
						grid[i][j] = k;
                        printf("Placing %d at (%d, %d)\n", k, i, j);
						if (check_views(j, i, grid, views) == 1)
						{
							solve(grid, views);
						}
						grid[i][j] = 0;
					}
					k++;
				}
				return ;
			}
			j++;
		}
		j = 0;
		i++;
	}

	print_temp(grid);
}

int	main(void)
{
	int	views[16]  = {2, 4, 2, 1, 2, 1, 3, 3, 3, 3, 1, 2, 1, 2, 4, 2};
	int	grid[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

	solve(grid, views);
}

//int	views[16]  = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};