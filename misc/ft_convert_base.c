/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:37:54 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/10 17:25:27 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
	if (valid_base(base))
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted_value;
	int		*result_tab;
	int		base_10;
	int		result;
	int		i;

	i = 0;
	converted_value = "";
	base_10 = ft_atoi_base(nbr, base_from);
	result = base_10;
	while (base_10 != 0)
	{
		result /= ft_strlen(base_to);
		i++;
	}
	result_tab = malloc(i + 1 * 4);
	result = base_10;
	while (i > -1)
	{
		result_tab[i] = result % ft_strlen(base_to);
		result /= ft_strlen(base_to);
		i--;
	}
	i = 0;
	while (result_tab[i])
	{
		converted_value[i] = base_to[result_tab[i] % ft_strlen(base_to)];
		i++;
	}
	return (converted_value);
	free(result_tab);
}

#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
}

