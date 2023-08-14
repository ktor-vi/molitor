/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_temp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:42:01 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/13 11:48:17 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_temp(int grid[4][4])
{
	printf("%d ", grid[0][0]);
	printf("%d ", grid[0][1]);
	printf("%d ", grid[0][2]);
	printf("%d\n", grid[0][3]);
	printf("%d ", grid[1][0]);
	printf("%d ", grid[1][1]);
	printf("%d ", grid[1][2]);
	printf("%d\n", grid[1][3]);
	printf("%d ", grid[2][0]);
	printf("%d ", grid[2][1]);
	printf("%d ", grid[2][2]);
	printf("%d\n", grid[2][3]);
	printf("%d ", grid[3][0]);
	printf("%d ", grid[3][1]);
	printf("%d ", grid[3][2]);
	printf("%d\n", grid[3][3]);
}
