/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:23:38 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/05 11:28:40 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
	int	len;
	int	i;

	len = ft_strlen(src);
	i = ft_strlen(dest);
	while (i < ft_strlen(dest) + len)
	{
		dest[len] = src[len];
		len--;
	}
	return (dest);
}

int main(void)
{
	char* s1 = "holla";
	char* s2 = "hello";

	printf("%s", ft_strcat(s1, s2));
}