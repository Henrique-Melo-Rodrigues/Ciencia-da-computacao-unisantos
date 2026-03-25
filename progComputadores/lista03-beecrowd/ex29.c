/*
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números
impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores
ímpares que estão entre os valores fornecidos na entrada que deverá caber em
um inteiro.
 */

#include <stdio.h>

int x, y, somaImpares, menor, maior;

int main() {
  scanf("%d %d", &x, &y);
  somaImpares = 0;
  if (x > y) {
    maior = x;
    menor = y;
  }

  else if (y > x) {
    maior = y;
    menor = x;
  }

  else {
    somaImpares = 0;
  }

  while (menor < maior) {
    menor++;
    if (menor == maior) {
      break;
    }
    if (menor % 2 != 0) {
      somaImpares += menor;
    }
  }
  printf("%d\n", somaImpares);

  return 0;
}
