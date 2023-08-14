/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:04:34 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/14 10:41:06 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	invalid_base(char *str);

int	ft_atoi_while(char *str, char *base, int digit, int result)
{
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
	if (!invalid_base(base))
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r') || (*str == '-'
				|| *str == '+'))
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
