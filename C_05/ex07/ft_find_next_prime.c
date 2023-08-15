/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:31:57 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/14 15:10:15 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	result;

	i = nb - 1;
	result = 1;
	if (nb == 1 || nb == 0 || nb < 0)
	{
		result = 0;
	}
	else
	{
		while (i > 0)
		{
			if (nb % i == 0 && i > 1)
			{
				result = 0;
			}
			i--;
		}
	}
	return (result);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
