/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:38:22 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/15 12:50:34 by vphilipp         ###   ########.fr       */
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

int	calculate_stt_malloc(int size, char **av)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i < size)
	{
		result += ft_strlen(av[i]) * 2 + 4 + 1;
		i++;
	}
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*str_tab;
	int					i;

	i = 0;
	str_tab = (struct s_stock_str *) malloc(calculate_stt_malloc(ac, av));
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
}
#include <stdio.h>

int	main(void)
{
	char				*av[3] = {"hep", "coucou", "my lord"};
	struct s_stock_str	*test;
	
	test = ft_strs_to_tab(3, av);
	printf("%d\n", test[0].size);
	printf("%s\n", test[0].str);
	printf("%s\n", test[0].copy);
	printf("%d\n", test[1].size);
	printf("%s\n", test[1].str);
	printf("%s\n", test[1].copy);
	printf("%d\n", test[2].size);
	printf("%s\n", test[2].str);
	printf("%s\n", test[2].copy);
	free(test);
}
