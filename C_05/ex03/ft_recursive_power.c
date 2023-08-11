/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:06:16 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/11 11:10:12 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
	else if (power < 0)
	{
		return (0);
	}
	else if (power > 1)
	{
		result *= ft_recursive_power(nb, power - 1);
	}
	return (result);
}
