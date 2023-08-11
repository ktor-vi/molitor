/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sort_params.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:58:24 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/08 13:20:46 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_ascii_value(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result += (int)*str;
		str++;
	}
	return (result);
}

void	ft_sort_argv_tab(char *tab[], int size)
{
	char	*temp;
	int		i;
	int		min_index;
	int		j;

	i = 1;
	while (i < size + 1)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_ascii_value(tab[j]) < ft_ascii_value(tab[min_index]))
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

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_argv_tab(argv, argc);
	while (argv[i])
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		i++;
		write(1, "\n", 1);
	}
}
