/*
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de
1 até N, inclusive N, se for o caso.

Entrada
A entrada contém um valor inteiro N (5 < N < 2000).

Saída
Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo
abaixo.

Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006
ao invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a
precisão adequadamente para que isso não ocorra.
*/

#include <stdio.h>

int main() {

  int number, quadradoNumeros;
  scanf("%d", &number);
  int i = 1;

  while (i <= number) {
    if (i % 2 == 0) {
      quadradoNumeros = i * i;
      printf("%d ^ 2 = %d\n", i, quadradoNumeros);
    }
    i++;
  }
  return 0;
}
