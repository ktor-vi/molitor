/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 07:27:20 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/17 21:54:32 by ktorvi           ###   ########.fr       */
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

int	ft_cc(char c, char *charset)
{
	int	i;
	int	len;

	len = ft_strlen(charset);
	i = 0;
	while (i < len)
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_strcpy_index(int i, int j, char *src, char *dest)
{
	int	len;
	int	c;

	len = j - i;
	c = 0;
	while (c < len)
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
}

int	ft_wc(char *str, char *charset)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (str[j] != '\0')
	{
		while (ft_cc(str[j], charset) && str[j] != '\0')
			j++;
		while (!ft_cc(str[j], charset) && str[j] != '\0')
			j++;
		k++;
	}
	return (k);
}

char	**ft_split(char *str, char *charset)
{
	char	**splitted;
	int		i;
	int		j;
	int		k;

	if (str == NULL || charset == NULL)
		return (malloc(1));
	splitted = malloc((ft_wc(str, charset) + 1) * sizeof(char *));
	j = 0;
	k = 0;
	while (str[j] != '\0')
	{
		while (ft_cc(str[j], charset) && str[j] != '\0')
			j++;
		i = j;
		while (!ft_cc(str[j], charset) && str[j] != '\0')
			j++;
		splitted[k] = (char *)malloc(j - i + 1);
		ft_strcpy_index(i, j, str, splitted[k]);
		k++;
	}
	splitted[k] = 0;
	return (splitted);
}
