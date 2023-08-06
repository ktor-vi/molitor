/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:23:38 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/05 19:24:58 by vphilipp         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(src);
	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
		dest[i] = '\0';
	}
	return (dest);
}

int	main(void)
{
	char s1[20] = "holla";	char *s2;

	s2 = "hello";

	ft_strncat(s1, s2, 4);
	printf("%s", s1);
}