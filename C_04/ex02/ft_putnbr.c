/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:32:34 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/09 18:53:45 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	placeholder;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	placeholder = (char)(nb % 10) + '0';
	write(1, &placeholder, 1);
}
