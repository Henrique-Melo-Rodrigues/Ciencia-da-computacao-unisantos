/*
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou
positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de
valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.
 */

#include <stdio.h>

int main() {
  float number;

  int i, numPositivos;

  for (i = 0; i < 6; i++) {
    scanf("%f", &number);
    if (number > 0)
      numPositivos++;
  }

  printf("%d valores positivos\n", numPositivos);
  return 0;
}
