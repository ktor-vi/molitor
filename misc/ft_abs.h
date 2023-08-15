/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktorvi <ktorvi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:38:44 by ktorvi            #+#    #+#             */
/*   Updated: 2023/08/15 10:05:43 by ktorvi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

#define ABS(x) ((x) * (((x) >> (4 * CHAR_BIT - 1)) | 1))