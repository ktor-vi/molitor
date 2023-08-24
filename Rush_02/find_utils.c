/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:29:36 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/20 18:45:02 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

long	ft_atol(char *str);
char	*ft_ltoa(long nb);
int		ft_strstr_found(char *str, char *to_find);
char	*trim_str(char *str);

char	*readfile_find(char *path, char *to_find)
{
	char	buffer[50];
	int		k;
	int		i;
	int		fd;

	fd = open(path, O_RDONLY);
	k = 0;
	i = -1;
	while (read(fd, buffer + k, 1) != 0)
	{
		if (buffer[k] == '\n')
		{
			if (ft_strstr_found(buffer, to_find))
				return (trim_str(buffer));
			while (++i < 50)
				buffer[i] = '\0';
			i = -1;
			k = 0;
		}
		else
			k++;
	}
	close(fd);
	write(1, "Dict Error.\n", 11);
	return (NULL);
}

void	print_unit(char *path, long nbr)
{
	int		i;
	char	*str;

	i = 0;
	str = readfile_find(path, ft_ltoa(nbr));
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	free(str);
}

void	less_find(char *path, long nb)
{
	long	tens;

	tens = 0;
	if (nb >= 20)
	{
		tens = nb - nb % 10;
		print_unit(path, tens);
		write(1, " ", 1);
		nb -= tens;
	}
	if (nb <= 19 && nb >= 10)
		print_unit(path, nb);
	else if (nb > 0)
		print_unit(path, nb % 10);
}

void	find_units(char *path, long nb)
{
	long	hundreds;

	hundreds = 0;
	if (nb >= 100)
	{
		hundreds = nb / 100;
		print_unit(path, hundreds);
		write(1, " ", 1);
		print_unit(path, 100);
		write(1, " ", 1);
		nb -= hundreds * 100;
	}
	less_find(path, nb);
}
