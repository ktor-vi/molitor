/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 08:38:54 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/07 09:02:29 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	i_dstlen;

	len = ft_strlen(src);
	j = 0;
	i = ft_strlen(dest);
	i_dstlen = ft_strlen(dest);
	if (size <= i_dstlen)
		return (len + size);
	while (src[j] != '\0' && j < size - i_dstlen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i_dstlen + len);
}
