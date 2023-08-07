/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 10:40:05 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/06 20:10:51 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
 {

    unsigned int i = 0;
    while (i < n && s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    if (i == n)
    {
        return 0;
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}