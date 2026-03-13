/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a
quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

CODIGO                  ESPECIFICAÇÃO                   PREÇO
-  1                    Cachorro quente                 R$4.00
-  2                    X-salada                        R$4.50
-  3                    X-bacon                         R$5.00
-  4                    Torrada simples                 R$2.00
-  5                    Refrigerante                    R$1.50

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e a
quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser 
pago, com 2 casas após o ponto decimal.
*/

#include <stdio.h>

int main(){
  int codigo, quantidade;
  float valorASerPago;
  scanf("%d %d", &codigo, &quantidade);
  
  if(codigo == 1){
    valorASerPago = 4 * quantidade;
    
    printf("Total: R$ %.2f\n", valorASerPago);
  }
  else if (codigo == 2) {
    valorASerPago = 4.5 * quantidade;

    printf("Total: R$ %.2f\n", valorASerPago);
  }
  else if(codigo == 3){
    valorASerPago = 5 * quantidade;

    printf("Total: R$ %.2f\n", valorASerPago);
  }
  else if(codigo == 4){
    valorASerPago = 2 * quantidade;

    printf("Total: R$ %.2f\n", valorASerPago);
  }
  else if(codigo == 5){
    valorASerPago = 1.5 * quantidade;

    printf("Total: R$ %.2f\n", valorASerPago);

  }
  else {
      printf("ERRO!\n Por favor inserir apenas os codigos da tabela\n");
  }

  return 0;
}
