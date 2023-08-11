/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:21:39 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/10 17:56:23 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if (power > 1)
	{
		while (power > 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}

int	invalid_base(char *str)
{
	char	c;
	char	*temp;

	while (*str)
	{
		c = *str;
		temp = str + 1;
		while (*temp)
		{
			if (*temp == c || *temp == '+' || *temp == '-')
			{
				return (1);
			}
			temp++;
		}
		str++;
	}
	return (0);
}

int	ft_to_base10(char *nbr, char *base)
{
	int	result;
	int	base_len;
	int	power;

	base_len = ft_strlen(base);
	power = ft_strlen(nbr) - 1;
	result = 0;
	while (*nbr)
	{
		result += (*nbr - '0') * ft_iterative_power(base_len, power);
		power--;
		nbr++;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	base_10;
	int	base_to_len;
	int	result_tab[tab];

	base_to_len = ft_strlen(base_to);
	base_10 = ft_to_base10(nbr, base_from);
	while (base_10 > 0)
	{

		base_10 / base_to_len
	}
}
