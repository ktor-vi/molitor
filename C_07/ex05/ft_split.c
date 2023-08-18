/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 07:27:20 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/17 22:20:21 by ktorvi           ###   ########.fr       */
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

char	*ft_str_assign(char *src, char *charset)
{
	int		i;
	int		m_size;
	char	*str;

	i = 0;
	m_size = 0;
	while (src[m_size] != '\0' && !ft_cc(src[m_size], charset))
		m_size++;
	str = malloc((m_size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < m_size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
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
	int		j;
	int		k;

	if (str == NULL || charset == NULL)
		return (NULL);
	splitted = malloc((ft_wc(str, charset) + 1) * sizeof(char *));
	j = 0;
	k = 0;
	while (str[j])
	{
		while (ft_cc(str[j], charset) && str[j] != '\0')
			j++;
		if (str[j])
			splitted[k] = ft_str_assign(str + j, charset);
		while (!ft_cc(str[j], charset) && str[j] != '\0')
			j++;
		k++;
	}
	splitted[k] = 0;
	return (splitted);
}
