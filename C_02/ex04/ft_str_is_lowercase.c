/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:55:47 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/04 11:29:59 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return (i);
}

int ft_str_is_lowercase(char *str) {
  int i;
  int result;

  i = 0;
  result = 1;
  while (i < ft_strlen(str)) {
    if (!(str[i] >= 97 && str[i] <= 122)) {
      result = 0;
    }
    i++;
  }
  return (result);
}
