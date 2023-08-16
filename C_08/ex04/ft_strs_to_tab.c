/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:38:22 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/15 13:52:54 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*str_tab;
	int					i;

	i = 0;
	str_tab = (struct s_stock_str *)malloc(ac * 24);
	while (i < ac)
	{
		str_tab[i].size = ft_strlen(av[i]);
		str_tab[i].str = malloc(ft_strlen(av[i]) + 1);
		str_tab[i].copy = malloc(ft_strlen(av[i]) + 1);
		ft_strcpy(str_tab[i].str, av[i]);
		ft_strcpy(str_tab[i].copy, av[i]);
		i++;
	}
	return (str_tab);
	free(str_tab);
}
