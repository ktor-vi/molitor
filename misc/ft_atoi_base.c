/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:42:11 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/10 12:43:29 by vphilipp         ###   ########.fr       */
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

int	find_dupc(char *str)
{
	char	c;
	char	*temp;

	while (*str)
	{
		c = *str;
		temp = str + 1;
		while (*temp)
		{
			if (*temp == c)
			{
				return (1);
			}
			temp++;
		}
		str++;
	}
	return (0);
}

int	ft_atoi_cond(char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len > 1 && !(find_dupc(base)) && !ft_strstr_bool(base, "+")
		&& !ft_strstr_bool(base, "-") && !ft_strstr_bool(base, "\t"))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	digit;

	sign = 1;
	result = 0;
	if (ft_atoi_cond(base))
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r') || (*str == '-'
				|| *str == '+'))
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		while (*str >= 33 && *str <= 126)
		{
			digit = 0;
			while (base[digit] != *str)
				digit++;
			if (digit >= ft_strlen(base))
				break ;
			result = result * ft_strlen(base) + digit;
			str++;
		}
		return (result * sign);
	}
	else
	{
		return (result);
	}
}
