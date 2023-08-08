/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:22:33 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/07 15:08:49 by vphilipp         ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len > 2 && !(find_dupc(base)) && !ft_strstr_bool(base, "+")
		&& !ft_strstr_bool(base, "-") && !ft_strstr_bool(base, "\t"))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr == 0)
		{
			write(1, "0", 1);
			return ;
		}
		if (nbr >= 10)
		{
			ft_putnbr_base(nbr / base_len, base);
		}
		write(1, &base[nbr % base_len], 1);
	}
}
