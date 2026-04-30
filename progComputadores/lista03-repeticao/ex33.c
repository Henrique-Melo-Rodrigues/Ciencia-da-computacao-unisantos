/*
Leia 100 valores inteiros. Apresente então o maior valor lido
e a posição dentre os 100 valores lidos.

Entrada:
O arquivo de entrada contém 100 números inteiros,
positivos e distintos.

Saída:
Apresente o maior valor lido e a posição de entrada,
conforme exemplo abaixo.

Exemplo de Entrada:
2
113
45
34565
6
...
8

Exemplo de Saída:
34565
4
*/
#include <stdio.h>

int position, num, numMaior;
int main() {
  position = 0;
  for (int i = 0; i < 100; i++) {
    scanf("%d", &num);
    if (i == 1) {
      numMaior = num;
      position = i;
    } else if (num > numMaior) {
      numMaior = num;
      position = i;
    }
  }
  printf("%d\n", numMaior);
  printf("%d\n", position + 1);

  return 0;
}
