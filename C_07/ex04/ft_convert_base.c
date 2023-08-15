/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:21:39 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/14 15:58:46 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*i_tab_to_a(int *tab, int tab_len);
int		ft_atoi_base(char *str, char *base);
char	*reverse_str(char *str);
int		ft_iterative_power(int nb, int power);

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

int	ft_nbr_chars(int nbr, int base_len)
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

char	*inner_while(int base_10, char *converted_rev, char *base_to, int i)
{
	while (base_10 > 0)
	{
		converted_rev[i] = base_to[base_10 % ft_strlen(base_to)];
		base_10 /= ft_strlen(base_to);
		i++;
	}
	return (converted_rev);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_10;
	char	*converted;
	int		i;
	int		neg;

	neg = 0;
	i = 0;
	if (invalid_base(base_from) || invalid_base(base_to))
		return (NULL);
	base_10 = ft_atoi_base(nbr, base_from);
	if (base_10 < 0)
	{
		neg = 1;
		base_10 = -base_10;
	}
	converted = malloc(ft_nbr_chars(base_10, ft_strlen(base_to)) + 1 + neg);
	converted = inner_while(base_10, converted, base_to, i);
	if (neg == 1)
		converted[ft_nbr_chars(base_10, ft_strlen(base_to))] = '-';
	converted[ft_nbr_chars(base_10, ft_strlen(base_to)) + neg] = '\0';
	return (reverse_str(converted));
	free(converted);
}
