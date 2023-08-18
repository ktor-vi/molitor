/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:42:11 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/17 19:47:14 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	valid_base(char *str)
{
	char	c;
	char	*temp;

	if (ft_strlen(str) > 1)
	{
		return (1);
	}
	while (*str)
	{
		c = *str;
		temp = str + 1;
		while (*temp)
		{
			if (*temp == c || *temp == '+' || *temp == '-')
			{
				return (0);
			}
			temp++;
		}
		str++;
	}
	return (1);
}

int	ft_atoi_while(char *str, char *base, int digit, int result)
{
	while (*str)
	{
		digit = 0;
		while (base[digit] != *str && base[digit] != '\0')
			digit++;
		if (digit >= ft_strlen(base))
			break ;
		result = result * ft_strlen(base) + digit;
		str++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	digit;

	sign = 1;
	result = 0;
	digit = 0;
	if (valid_base(base))
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		return (ft_atoi_while(str, base, digit, result) * sign);
	}
	else
	{
		return (result);
	}
}
