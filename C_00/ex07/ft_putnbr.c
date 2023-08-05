/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:01:00 by vphilipp          #+#    #+#             */
/*   Updated: 2023/08/02 18:37:55 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a) { write(1, &a, 1); }

void ft_putnbr(int nb) {
  if (nb == -2147483648) {
    ft_putchar('-');
    ft_putchar('2');
    nb = 147483648;
  }
  if (nb < 0) {
    ft_putchar('-');
    nb *= -1;
  }
  if (nb < 10) {
    ft_putchar(nb + 48);
    return;
  } else
    ft_putnbr(nb / 10);
  ft_putnbr(nb % 10);
}

int main(void) { ft_putnbr(798739); }
