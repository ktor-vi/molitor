/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:06:02 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/20 18:39:27 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	find_units(char *path, long nb);
void	print_unit(char *path, long nbr);

void	print_billions(char *path, long nb)
{
	find_units(path, nb);
	write(1, " ", 1);
	print_unit(path, 1000000000);
	write(1, " ", 1);
}

void	print_millions(char *path, long nb)
{
	find_units(path, nb);
	write(1, " ", 1);
	print_unit(path, 1000000);
	write(1, " ", 1);
}

void	print_thousands(char *path, long nb)
{
	find_units(path, nb);
	write(1, " ", 1);
	print_unit(path, 1000);
	write(1, " ", 1);
}

void	print_number(char *path, long nb)
{
	long	billions;
	long	millions;
	long	thousands;

	if (nb == 0)
		print_unit(path, nb);
	if (nb >= 1000000000)
	{
		billions = nb / 1000000000;
		print_billions(path, billions);
		nb -= billions * 1000000000;
	}
	if (nb >= 1000000)
	{
		millions = nb / 1000000;
		print_millions(path, millions);
		nb -= millions * 1000000;
	}
	if (nb >= 1000)
	{
		thousands = nb / 1000;
		print_thousands(path, thousands);
		nb -= thousands * 1000;
	}
	find_units(path, nb);
}
