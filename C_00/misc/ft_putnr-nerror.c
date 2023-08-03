/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:01:00 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/02 18:34:51 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_size(int nb)
{
	int	count;

	count = 1;
	while (nb > 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

void	ft_putnbr(int nb)
{
	int	size;
	int	digit;
	int	i;
	int	j;
	char	digits[];

	size = check_size(nb);
	i = 0;
	while (i < size)
	{
		digit = nb % 10;
		digits[size - i - 1] = digit + 48;
		nb /= 10;
		i++;
	}
	j = 0;
	while (j < size)
	{
		write(1, &digits[j], 1);
		j++;
	}
}

int	main(void)
{
	ft_putnbr(68439);
}
