/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:31:18 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/20 11:58:31 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

long	ft_atol(char *str);

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

char	*ft_strcat(char *dest, char *src)

{
	int len;
	int i;
	int j;

	len = ft_strlen(src);
	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_c_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < ft_strlen(str))
	{
		if (!((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65
					&& str[i] <= 90)))
		{
			result = 0;
		}
		i++;
	}
	return (result);
}

int	ft_strstr_found(char *str, char *to_find)
{
	char	*ptr_str;
	char	*ptr_find;

	if (*to_find == '\0')
		return (0);
	while (*str)
	{
		ptr_str = str;
		ptr_find = to_find;
		while (*ptr_find && *ptr_str == *ptr_find)
		{
			ptr_str++;
			ptr_find++;
		}
		if (*ptr_find == '\0')
			return (1);
		str++;
	}
	return (0);
}

char	find_units(int fd, char *number)
{
	long	nb;
	long	hundreds;
	long	tens;
	long	units;

	nb = atol(number);
	if (nb / 100 != 0)
	{
		hundreds = nb / 100;
		readfile_find(fd, ltoa(hundreds));
	}
}

char	*trim_str(char *str)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)))
		{
			count++;
		}
	}
}

char	*readfile_find(int fd, char *to_find)
{
	char	buffer[20];
	int		bytes_read;
	int		k;
	char	t;
	int		i;

	k = 0;
	i = -1;
	bytes_read = 1;
	while (bytes_read != 0)
	{
		t = 0;
		bytes_read = read(fd, &t, 1);
		buffer[k++] = t;
		if (t == '\n' || t == '\0')
		{
			if (ft_strstr_found(buffer, to_find))
				return (buffer);
			while (++i < 30)
				buffer[i] = '\0';
			i = -1;
			k = 0;
		}
	}
}

int	main(void)
{
	int	dict;

	dict = open("numbers.dict", O_RDONLY);
	readfile(dict, "20");
}
