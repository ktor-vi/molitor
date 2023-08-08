/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:20:58 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/07 18:28:04 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if (power > 1)
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
