#include <unistd.h>

void ft_putchar(char c);
void ft_print_numbers(void);

int main(void){
    ft_print_numbers();
}

void ft_print_numbers(void){
    char digit = '0';

    for(int i = 0; i < 10; i++){
        ft_putchar(digit);
        digit++;
    }
}
void ft_putchar(char c){
    write(1, &c, 1);
}