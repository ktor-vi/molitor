#include <unistd.h>

void ft_print_comb(void);

int main(void) { ft_print_comb(); }
void ft_print_comb(void) {
  {
    char i = '0';
    char j = '1';
    char k = '2';

    while (i <= '7') {
      while (j <= '8') {

        while (k <= '9') {
          if (i == '7') {
            write(1, &i, 1);
            write(1, &j, 1);
            write(1, &k, 1);
          } else {
            write(1, &i, 1);
            write(1, &j, 1);
            write(1, &k, 1);
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
}
