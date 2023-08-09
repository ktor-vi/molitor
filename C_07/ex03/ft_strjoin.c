/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:40:20 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/09 11:54:02 by ktorvi           ###   ########.fr       */
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
	int len;
	int i;
	int j;

	len = ft_strlen(src);
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
		return ("");
	i = 0;
	malloc_size = 1;
	while (i < size)
	{
		malloc_size += ft_strlen(*strs[i]);
		if (i < size - 1)
			malloc_size += ft_strlen(sep);
	}
	i = 0;
	result = malloc(malloc_size);
	while (i < size)
	{
		strcat(result, *strs[i]);
		strcat(result, sep);
	}
	return (result);
}
