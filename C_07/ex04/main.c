/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 03:29:23 by badam             #+#    #+#             */
/*   Updated: 2023/08/17 15:35:27 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef", "0123456789"));
	printf("-2a:%s\n", ft_convert_base("-42", "0123456789", "0123456789abcdef"));
	printf("?:%s\n", ft_convert_base("--01234", "0123456789", "01"));
}
