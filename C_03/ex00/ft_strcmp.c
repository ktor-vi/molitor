/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:31:20 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/05 10:39:12 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0')
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
	char* s1 = "haello";
	char* s2 = "hello";

	printf("%d", ft_strcmp(s1, s2));
}
