/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:31:18 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/20 18:51:18 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	print_number(char *path, long nb);
long	ft_atol(char *str);

int	main(int argc, char **argv)
{
	long	number;

	if (argc == 2)
	{
		number = ft_atol(argv[1]);
		if (number < 0)
			write(1, "Error.\n", 7);
		else
			print_number("numbers.dict", number);
		return (0);
	}
	else if (argc == 3)
	{
		number = ft_atol(argv[2]);
		if (number < 0)
			write(1, "Error.\n", 7);
		else if (open(argv[1], O_RDONLY) == -1)
			write(1, "Dict error.\n", 11);
		else
			print_number(argv[1], number);
		return (0);
	}
}
