/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 07:27:20 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/16 07:59:53 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	**ft_split(char *str, char *charset)
{
	char	**splitted;
	int		i;
	int		j;

	splitted = malloc(sizeof(char **));
	i = 1;
	while (i < ft_strlen(str))
	{
		j = i + 1;
		if (ft_cc(str[i - 1], charset) && !ft_cc(str[i], charset))
		{
			while(!(!ft_cc(str[j - 1], charset) && !ft_cc(str[j], charset)))
			{
				
			}
		}
		i++;
		
	}
}

#include <stdio.h>

int	main(void)
{
	printf("%lu", sizeof(char **));
}
