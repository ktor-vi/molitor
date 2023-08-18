/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:04:34 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/18 06:59:04 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		invalid_base(char *str);
int		ft_strlen(char *str);

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

char	*reverse_str(char *str)
{
	int		i;
	int		len;
	char	*rev;

	i = 0;
	len = ft_strlen(str);
	rev = malloc(len + 1);
	while (i < len)
	{
		rev[i] = str[len - i - 1];
		i++;
	}
	rev[i] = '\0';
	return (rev);
}
