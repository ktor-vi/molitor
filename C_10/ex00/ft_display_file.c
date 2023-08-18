/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:42:45 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/17 12:52:54 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	fd;

	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	while (!feof(fd))
	{
	}
}
