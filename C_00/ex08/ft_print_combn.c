#include <unistd.h>
void ft_print_combn(int n) {
  char digits[10];
  int i;
  int j;

  i = 0;
  j = 0;
  digits = { [0 ... 9] = '0' } while (i < n) {
    while (j < 9) {
      ft_print(digits[i]);
    }
  }
}

void ft_print(char i) { write(1, &i, 1); }

int main(void) { ft_print_combn(3); }
