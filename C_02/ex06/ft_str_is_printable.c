/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:35:35 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/05 18:47:14 by vphilipp         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < ft_strlen(str))
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}
