/*
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos
a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.
*/
#include <stdio.h>

int main() {
  int number;
  scanf("%d", &number);
  if (number % 2 == 0) {
    number++; // Transformando number em impar
  }

  for (int i = 0; i < 6; i++) {
    printf("%d\n", number);
    number += 2; // mantendo number em impar
  }

  return 0;
}
