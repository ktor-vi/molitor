/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:27:49 by vphilipp          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/08/09 16:25:05 by vphilipp         ###   ########.fr       */
=======
/*   Updated: 2023/08/09 18:54:31 by ktorvi           ###   ########.fr       */
>>>>>>> f63e9debf23b74b52e4389dd950d389ff3953425
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
