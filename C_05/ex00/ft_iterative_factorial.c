/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:46:56 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/09 12:51:50 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else if (nb >= 1)
	{
		while (nb >= 2)
		{
			result *= nb - 1;
			nb--;
		}
		return (result);
	}
	else
	{
		return (0);
	}
}
