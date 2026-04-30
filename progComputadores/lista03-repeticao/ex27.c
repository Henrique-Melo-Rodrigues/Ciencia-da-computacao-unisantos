/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram
positivos. Na próxima linha, deve-se mostrar a média de todos os valores
positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante.
Pelo menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha
deve mostrar a média dos valores positivos digitados.
 */

#include <stdio.h>

int main() {
  int numPositivos = 0;
  float numbers, soma, mediaNumPositivos;
  soma = 0;

  int i;
  for (i = 0; i < 6; i++) {
    scanf("%f", &numbers);
    if (numbers > 0) {
      numPositivos++;
      soma += numbers;
    }
  }
  mediaNumPositivos = soma / numPositivos;

  printf("%d valores positivos\n", numPositivos);
  printf("%.1f\n", mediaNumPositivos);

  return 0;
}
