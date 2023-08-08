/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:56:48 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/07 17:25:07 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
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
		result *= ft_recursive_factorial(nb - 1);
	}
	else
	{
		return (0);
	}
	return (result);
}
