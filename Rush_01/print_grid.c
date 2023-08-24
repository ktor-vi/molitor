/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:36:28 by thfranch          #+#    #+#             */
/*   Updated: 2023/08/13 17:12:52 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	print_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			ft_putchar(grid[i][j] + 48);
			if (j < 3)
				ft_putchar(' ');
			++j;
		}
		if (i < 3)
			ft_putchar('\n');
		++i;
		j = 0;
	}
}
