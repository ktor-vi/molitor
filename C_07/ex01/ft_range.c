/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:12:42 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/09 11:33:06 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	else
	{
		range = malloc((max - min) * 4);
		i = 0;
		while (min < max)
		{
			range[i] = min;
			i++;
			min++;
		}
		return (range);
	}
}
