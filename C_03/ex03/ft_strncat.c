/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:53:47 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/05 12:04:29 by vphilipp         ###   ########.fr       */
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

char *ft_strncat(char *dest, char *src, unsigned int nb)
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

    ft_strcat(s1, s2);
	printf("%s", s1);
}