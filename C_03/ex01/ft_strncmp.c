/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:40:05 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/05 11:23:08 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			result = 1;
			break;
		}
		if (s1[i] < s2[i])
		{
			result = -1;
			break;
		}
		i++;
	}
	return (result);
}

int main(void)
{
	char* s1 = "holla";
	char* s2 = "hello";

	printf("%d", ft_strncmp(s1, s2, 2));
}
