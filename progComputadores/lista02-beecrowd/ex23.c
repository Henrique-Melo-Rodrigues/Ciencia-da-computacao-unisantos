/*
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares,
quantos valores digitados foram ímpares, quantos valores digitados foram
positivos e quantos valores digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha,
não esquecendo o final de linha após cada uma.
 */

#include <stdio.h>

int main() {
  int num1, num2, num3, num4, num5;
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  scanf("%d", &num4);
  scanf("%d", &num5);

  int numPar = 0;
  int numImpar = 0;
  int numPositivo = 0;
  int numNegativo = 0;

  // Variavel eh par ou impar?

  if (num1 % 2 == 0) {
    numPar++;
  } else {
    numImpar++;
  }

  if (num2 % 2 == 0) {
    numPar++;
  } else {
    numImpar++;
  }

  if (num3 % 2 == 0) {
    numPar++;
  } else {
    numImpar++;
  }

  if (num4 % 2 == 0) {
    numPar++;
  } else {
    numImpar++;
  }

  if (num5 % 2 == 0) {
    numPar++;
  } else {
    numImpar++;
  }

  // Numero eh positivo ou negativo?

  if (num1 > 0) {
    numPositivo++;
  } else if (num1 < 0) {
    numNegativo++;
  }

  if (num2 > 0) {
    numPositivo++;
  } else if (num2 < 0) {
    numNegativo++;
  }

  if (num3 > 0) {
    numPositivo++;
  } else if (num3 < 0) {
    numNegativo++;
  }

  if (num4 > 0) {
    numPositivo++;
  } else if (num4 < 0) {
    numNegativo++;
  }

  if (num5 > 0) {
    numPositivo++;
  } else if (num5 < 0) {
    numNegativo++;
  }

  printf("%d valor(es) par(es)\n", numPar);
  printf("%d valor(es) impar(es)\n", numImpar);
  printf("%d valor(es) positivo(s)\n", numPositivo);
  printf("%d valor(es) negativo(s)\n", numNegativo);

  return 0;
}
