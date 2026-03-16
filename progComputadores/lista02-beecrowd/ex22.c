/*
Faça um programa que leia 5 valores inteiros. Conte quantos destes valores
digitados são pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de
valores pares lidos.

*/

#include <stdio.h>

int main() {
  int num1, num2, num3, num4, num5;
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  scanf("%d", &num4);
  scanf("%d", &num5);

  int numerosPares = 0;

  if (num1 % 2 == 0) {
    numerosPares++;
  }
  if (num2 % 2 == 0) {
    numerosPares++;
  }
  if (num3 % 2 == 0) {
    numerosPares++;
  }
  if (num4 % 2 == 0) {
    numerosPares++;
  }
  if (num5 % 2 == 0) {
    numerosPares++;
  }
  printf("%d valores pares\n", numerosPares);

  return 0;
}
