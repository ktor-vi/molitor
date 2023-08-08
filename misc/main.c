#include <stdio.h>

char *ft_strcpy(char *dest, char *src);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strlowcase(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void) {
  char dest[20] = "piscina";
  char *src = " splishsplash";
  char *str = "piscina splish splash";
  char *numeric = "19216811";
  char *not = "111aa111";
  char *upcase = "PISCINA";
  char not_printable[4] = {23, 24, 28, 34};
  unsigned int size = 7;

  printf("%s", ft_strcpy(dest, src));
  printf("%d", ft_str_is_numeric(str));
  printf("%d", ft_str_is_lowercase(str));
  printf("%d", ft_str_is_uppercase(str));
  printf("%d", ft_str_is_printable(str));
  printf("%s", ft_strupcase(str));
  printf("%s", ft_strlowcase(str));
  printf("%s", ft_strlowcase(str));
  printf("%d", ft_strlcpy(dest, src, size));
  printf("%s", not_printable);
}
