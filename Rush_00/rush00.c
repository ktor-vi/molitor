#include <stdio.h>
void ft_putchar(char c);
void rush(int x, int y) {

  printf("%d %d\n", x, y);
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) { // corners of rectangle
      if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1) ||
          (i == 0 && j == x - 1) || (i == y - 1 && j == 0)) {
        ft_putchar('o');
      } else if (i == 0 || i == x - 1) {
        ft_putchar('-');
      } else if (j == 0 || j == y - 1) {
        ft_putchar('|');
      } else if ((i > 0 && i < y - 1) || (j > 0 && j < x - 1)) {
        ft_putchar(' ');
        // printf("%d %d", i, j);
      }
      // printf("%d %d", i, j);
    }
    ft_putchar('\n');
  }
}
