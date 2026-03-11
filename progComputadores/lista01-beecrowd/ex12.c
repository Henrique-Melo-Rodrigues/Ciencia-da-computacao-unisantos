/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no 
qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a relação de notas necessárias.

Entrada

  O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).
  Saída
 
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, 
conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso
contrário seu programa apresentará a mensagem: “Presentation Error”.
 */

#include<stdio.h>


int main()
{
    int valor;
    scanf("%d", &valor);
    int valorTotal = valor;
    
    int notasDe100 = valor / 100;
    valor = valor % 100;
    
    int notasDe50 = valor / 50;
    valor = valor % 50;
    
    int notasDe20 = valor /20;
    valor = valor % 20;
    
    int notasDe10 = valor / 10;
    valor = valor % 10;
    
    int notasDe5 = valor / 5;
    valor = valor % 5;
    
    int notasDe2 = valor / 2;
    valor = valor % 2;
    
    int notasDe1 = valor;
    
    printf("%d\n", valorTotal);
    printf("%d nota(s) de R$ 100,00\n", notasDe100);
    printf("%d nota(s) de R$ 50,00\n", notasDe50);
    printf("%d nota(s) de R$ 20,00\n", notasDe20);
    printf("%d nota(s) de R$ 10,00\n", notasDe10);
    printf("%d nota(s) de R$ 5,00\n", notasDe5);
    printf("%d nota(s) de R$ 2,00\n", notasDe2);
    printf("%d nota(s) de R$ 1,00\n", notasDe1);
    
    return 0;
}

