/*
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y.
Escreva para cada X e Y uma mensagem que indique se estes valores
foram digitados em ordem crescente ou decrescente.

Entrada:
A entrada contém vários casos de teste. Cada caso contém dois valores
inteiros X e Y. A leitura deve ser encerrada ao serem fornecidos
valores iguais para X e Y.

Saída:
Para cada caso de teste, imprima "Crescente", caso os valores tenham
sido digitados na ordem crescente. Caso contrário, imprima a mensagem
"Decrescente".

Exemplo de Entrada:
5 4
7 2
3 8
2 2

Exemplo de Saída:
Decrescente
Decrescente
Crescente
*/
#include <stdio.h>
int x, y;

int main() {
  while (1) { // <-- while True
    scanf("%d %d", &x, &y);
    if (x == y) {
      break;
    } else if (x < y) {
      printf("Crescente\n");
    } else if (x > y) {
      printf("Decrescente\n");
    }
  }
  return 0;
}
