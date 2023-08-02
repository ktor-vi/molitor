#include <unistd.h>

void ft_print_comb2(void);

int main(void) { ft_print_comb2(); }
void ft_print_comb2(void) {
  {
    char i = '0';
    char j = '1';
    char k = '2';

    while (i <= '9') {
      while (j <= '9') {
        if (i == '9' && j == '8') {
          write(1, &i, 1);
          write(1, &j, 1);
        } else {
          write(1, &i, 1);
          write(1, &j, 1);
          write(1, ",  ", 2);
        }
        j++;
      }
      i++;
      j = '0';
    }
  }
}
