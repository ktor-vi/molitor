/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:40:20 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/18 06:59:23 by ktorvi           ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		malloc_size;

	if (size == 0)
		return (malloc(1));
	i = 0;
	malloc_size = 1;
	while (i < size)
	{
		malloc_size += ft_strlen(strs[i]);
		if (i < size - 1)
			malloc_size += ft_strlen(sep);
		i++;
	}
	i = -1;
	result = malloc((malloc_size + 1) * sizeof(char));
	result[0] = '\0';
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}
