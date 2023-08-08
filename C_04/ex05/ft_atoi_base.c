/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:42:11 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/08 16:07:38 by vphilipp         ###   ########.fr       */
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

int	ft_strstr_bool(char *str, char *to_find)
{
	char	*ptr_str;
	char	*ptr_find;

	if (*to_find == '\0')
		return (0);
	while (*str)
	{
		ptr_str = str;
		ptr_find = to_find;
		while (*ptr_find && *ptr_str == *ptr_find)
		{
			ptr_str++;
			ptr_find++;
		}
		if (*ptr_find == '\0')
			return (1);
		str++;
	}
	return (0);
}

int	find_dupc(char *str)
{
	char	c;

	while (*str)
	{
		c = *str;
		str++;
		while (*str)
		{
			if (*str == c)
			{
				return (1);
			}
			str++;
		}
	}
	return (0);
}

int	ft_atoi_cond(char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len > 2 && !(find_dupc(base)) && !ft_strstr_bool(base, "+")
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
		while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = -1;
			str++;
		}
		while (*str)
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
