/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 01:18:15 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/21 01:29:48 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i - 1], tab[i]) > 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	int_cmp(int nb1, int nb2)
{
	if (nb1 == nb2)
	{
		return (0);
	}
	else
		return (nb1 - nb2);
}

#include <stdio.h>

int	main(void)
{
	int tab[6] = {1, 2, 3, 3, 5, 6};

	printf("%d\n", ft_is_sort(tab, 6, &int_cmp));
}*/