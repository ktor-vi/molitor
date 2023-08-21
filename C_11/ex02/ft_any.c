/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:45:51 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/20 19:57:29 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if ((*f)(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
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
	char *tab[6] = {"1234", "42", "122", "54", "42", NULL};
	
	printf("%d\n", ft_any(tab, &ft_str_is_alpha));
}