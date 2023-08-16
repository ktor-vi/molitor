/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:23:50 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/15 14:10:58 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN
# define FT_BOOLEAN
#include <unistd.h>

#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define TRUE 1
typedef int	t_bool;
#define FALSE 0
#define SUCCESS 0
#define EVEN(nbr) ( nbr % 2 == 0)
#endif