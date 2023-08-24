/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_other_else.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:34:30 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/23 19:36:08 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"

void	other_else_handler(int argc, int i)
{
	write(1, "map error\n", 10);
	if (argc > 2 && i != argc - 1)
		write(1, "\n", 1);
}
