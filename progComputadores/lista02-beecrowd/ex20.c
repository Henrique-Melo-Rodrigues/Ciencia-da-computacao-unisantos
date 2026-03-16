/*
Leia um número inteiro que representa um código de DDD para discagem
interurbana. Em seguida, informe a qual cidade o DDD pertence, de acordo com a
tabela abaixo:

DDD | Destination
61  | Brasilia
71  | Salvador
11  | Sao Paulo
21  | Rio de Janeiro
32  | Juiz de Fora
19  | Campinas
27  | Vitoria
31  | Belo Horizonte

Entrada:
A entrada consiste em um único valor inteiro representando o DDD.

Saída:
Imprima o nome da cidade correspondente ao DDD informado.
Caso o DDD não esteja presente na tabela, imprima:

DDD nao cadastrado
*/

#include <stdio.h>

int main() {
  int ddd;
  scanf("%d", &ddd);

  switch (ddd) {
  case 61:
    printf("Brasilia\n");
    break;

  case 71:
    printf("Salvador\n");
    break;

  case 11:
    printf("Sao Paulo\n");
    break;

  case 21:
    printf("Rio de Janeiro\n");
    break;

  case 32:
    printf("Juiz de Fora\n");
    break;

  case 19:
    printf("Campinas\n");
    break;

  case 27:
    printf("Vitoria\n");
    break;

  case 31:
    printf("Belo Horizonte\n");
    break;

  default:
    printf("DDD nao cadastrado\n");
  }

  return 0;
}
