/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:27:09 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/20 17:31:24 by vphilipp         ###   ########.fr       */
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

int	ft_strstr_found(char *str, char *to_find)
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

int	count_malloc(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while ((((str[i] >= 48 && str[i] <= 57) || (str[i] == ' ' || str[i] == ':'))
			&& (str[i] != '\n' && str[i] != '\0')))
	{
		i++;
	}
	while (str[i] != '\n' && str[i] != '\0')
	{
		i++;
		count++;
		if (str[i - 1] == ' ' && str[i] == ' ')
		{
			count--;
		}
	}
	return (count);
}

char	*trim_str(char *str)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc(count_malloc(str) + 1);
	while ((((str[i] >= 48 && str[i] <= 57) || (str[i] == ' ' || str[i] == ':'))
			&& str[i] != '\n'))
		i++;
	while (j < count_malloc(str))
	{
		if (!(str[i - 1] == ' ' && str[i] == ' '))
		{
			res[j] = str[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}
