/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:12:36 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/02 16:16:31 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_print_comb(void) {
  char i;
  char j;
  char k;

  i = '0';
  j = '1';
  k = '2';
  while (i <= '7') {
    while (j <= '8') {
      while (k <= '9') {
        if (i == '7') {
          ft_print(i, j, k);
        } else {
          ft_print(i, j, k);
          write(1, ",  ", 2);
        }
        k++;
      }
      j++;
      k = j + 1;
    }
    i++;
    j = i + 1;
    k = j + 1;
  }
}

void ft_print(char i, char j, char k) {
  write(1, &i, 1);
  write(1, &j, 1);
  write(1, &k, 1);
}

int main(void) { ft_print_comb(); }
