/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:32:43 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/09 12:52:11 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	number;

	number = 0;
	if (index == 0)
	{
		return (0);
	}
	else if (index < 0)
	{
		return (-1);
	}
	else if (index == 2 || index == 1)
	{
		return (1);
	}
	else if (index == 3)
	{
		return (2);
	}
	else
	{
		number += ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (number);
}
