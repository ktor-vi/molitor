/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:33:47 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/20 14:30:28 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lonlen(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		i++;
		nb = (nb / 10);
	}
	return (i);
}

char	*ft_ltoa(long nb)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * (lonlen(nb) + 1));
	if (!str)
		return (NULL);
	i = lonlen(nb);
	str[i--] = '\0';
	if (nb == 0)
		str[i] = '0';
	else if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

long	ft_atol(char *str)
{
	long	sign;
	long	result;
	int		i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * (long)10 + (long)(str[i] - '0');
		i++;
	}
	return (result * sign);
}
