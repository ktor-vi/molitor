/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:21:39 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/14 10:41:25 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*i_tab_to_a(int *tab, int tab_len);
int		ft_atoi_base(char *str, char *base);

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

int	ft_nbr_chars_base(int nbr, int base_len)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= base_len;
		i++;
	}
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_10;
	int		base_to_len;
	char	*converted_tab;
	int		i;

	i = 0;
	base_to_len = ft_strlen(base_to);
	base_10 = ft_atoi_base(nbr, base_from);
	converted_tab = malloc(ft_nbr_chars_base(base_10, base_to_len));
	while (base_10 > 0)
	{
		converted_tab[ft_nbr_chars_base(base_10, base_to_len) - 1
			- i] = base_to[base_10 % base_to_len];
		base_10 /= base_to_len;
		i++;
	}
	return (converted_tab);
}

int	main(void)
{
	printf("%s", ft_convert_base("101010", "01", "0123456789"));
}