/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:56:39 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/03 14:29:05 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min_index;
	int	temp;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_index])
				min_index = j;
			j++;
		}
		if (min_index != i)
		{
			temp = tab[i];
			tab[i] = tab[min_index];
			tab[min_index] = temp;
		}
		i++;
	}
}
