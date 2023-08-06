void ft_putchar(char c);
void rush(int x, int y) {
  // On va prendre comme exemple x = 5 et y = 3
  //
  // Deux boucles imbriquées pour itérer sur toutes les "cases" du tableau, les
  // chars que l'on outputte son les "bordures" de ce tableau
  int i;
  int j;

  i = 0;
  j = 0;
  while (i < y) {
    while (j < x) {
      // ici premier if pour les coins 0:0 et 4:4 -> les A du rectangle
      if ((i == 0 && j == 0) || (i == y - 1 && j == 0)) {
        ft_putchar('A');
        // ici deuxième if pour les coins 0:4 et 4:0 -> les C du rectangle
      } else if ((i == 0 && j == x - 1) || (i == y - 1 && j == x - 1)) {
        ft_putchar('C');
        // ici troisième if pour les cotés 'B'
      } else if ((i == 0 || i == y - 1) || (j == 0 || j == x - 1)) {
        ft_putchar('B');
      } else if ((i > 0 && i < y - 1) || (j > 0 && j < x - 1)) {
        // ici dernier if pour les espaces vides à l'intérieur -> aka tout ce
        // qui n'est pas un coin ou un coté !
        ft_putchar(' ');
      }
      j++;
    }
    ft_putchar('\n');
    i++;
    j = 0;
  }
}
