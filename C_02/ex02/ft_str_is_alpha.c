/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:24:12 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/05 11:35:02 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return (i);
}

int ft_str_is_alpha(char *str) {
  int i;
  int result;

  i = 0;
  result = 1;
  while (i < ft_strlen(str)) {
    if (!((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))) {
      result = 0;
    }
    i++;
  }
  return (result);
}
