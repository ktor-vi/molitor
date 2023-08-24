/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:00:04 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/23 18:33:15 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_map.h"

char	get_empty(char *str)
{
	return (str[str_len(str) - 3]);
}

char	get_obs(char *str)
{
	return (str[str_len(str) - 2]);
}

char	get_full(char *str)
{
	return (str[str_len(str) - 1]);
}
