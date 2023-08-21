/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:43:38 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/20 19:44:58 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	res_tab;

	res_tab = malloc(length);
	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
	return (res_tab);
}
