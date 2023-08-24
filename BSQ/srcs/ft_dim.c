/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dim.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:38:16 by randre            #+#    #+#             */
/*   Updated: 2023/08/23 17:55:18 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"

int	nbr_rowsnf(char *str)
{
	char	array[12];
	char	*nbr_str;
	char	*start;

	nbr_str = array;
	start = nbr_str;
	while (*str != '\n')
	{
		if (*str < '0' || *str > '9')
		{
			*nbr_str = 0;
			break ;
		}
		*nbr_str = *str;
		nbr_str++;
		str++;
	}
	return (ft_atoi(start) + 1);
}

int	nbr_rows(char *str)
{
	char	array[12];
	char	*nbr_str;
	int		chan;
	char	*start;

	nbr_str = array;
	start = nbr_str;
	chan = open(str, O_RDONLY);
	while (read(chan, nbr_str, 1) > 0)
	{
		if (*nbr_str < '0' || *nbr_str > '9')
		{
			*nbr_str = 0;
			break ;
		}
		nbr_str++;
	}
	close(chan);
	return (ft_atoi(start) + 1);
}

int	nbr_cols(char *str)
{
	int		i;
	char	c;
	int		chan;

	chan = open(str, O_RDONLY);
	i = 0;
	while (read(chan, &c, 1) > 0)
	{
		if (c == '\n')
			break ;
	}
	while (read(chan, &c, 1) > 0)
	{
		if (c == '\n')
			break ;
		i++;
	}
	close(chan);
	return (i);
}
