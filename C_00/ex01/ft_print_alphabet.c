#include <unistd.h>

void ft_print_alphabet(void){
    char letter = 'a';

    for(int i = 0; i < 26; i++){
        ft_putchar(letter);
        letter++;
    }
}


void ft_putchar(char c){
    write(1, &c, 1);
}