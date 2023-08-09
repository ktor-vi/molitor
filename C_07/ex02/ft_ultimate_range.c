/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:24:24 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/09 11:38:45 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*range_tab;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	else
	{
		range_tab = malloc((max - min) * 4);
		i = 0;
		while (min < max)
		{
			range_tab[i] = min;
			i++;
			min++;
		}
		*range = range_tab;
		return (size);
	}
}
