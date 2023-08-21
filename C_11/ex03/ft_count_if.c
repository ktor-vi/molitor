/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 01:12:26 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/21 01:17:07 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

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

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < ft_strlen(str))
	{
		if (!((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65
					&& str[i] <= 90)))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char *tab[6] = {"1234", "42", "33", "54", "42", "22"};

	printf("%d\n", ft_count_if(tab, 6, &ft_str_is_alpha));
}