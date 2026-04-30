/*
Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Entrada
A entrada contém um valor inteiro N (2 < N < 1000).

Saída
Imprima a tabuada de N, conforme o exemplo fornecido.
 */

#include <stdio.h>

int main() {
  int number;
  scanf("%d", &number);
  if (2 < number && number < 1000) {
    for (int i = 1; i <= 10; i++) {
      printf("%d x %d = %d\n", i, number, number * i);
    }
  }
  return 0;
}
