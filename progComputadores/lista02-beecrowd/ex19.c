/*
A empresa ABC resolveu conceder um aumento de salários a seus funcionários de 
acordo com a tabela abaixo:

Salário 	Percentual de Reajuste

Salário de 0 até 400.00        -> reajuste de 15%
Salário de 400.01 até 800.00   -> reajuste de 12%
Salário de 800.01 até 1200.00  -> reajuste de 10%
Salário de 1200.01 até 2000.00 -> reajuste de 7%
Salário acima de 2000.00       -> reajuste de 4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o 
valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos
devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, 
conforme exemplo abaixo.
*/

#include <stdio.h>

int main(){
    
  float salario;
  float reajusteSalarial;
  scanf("%f", &salario);

  if (salario > 0 && salario <= 400){
    reajusteSalarial = salario +  (salario * 0.15);

    printf("Novo salario: %.2f\n",reajusteSalarial);
    printf("Reajuste ganho: R$ %.2f\n", salario * 0.15);
    printf("Em percentual: 15 %%\n");
  }
  else if (salario > 400 && salario <= 800){
    reajusteSalarial = salario + (salario * 0.12);

    printf("Novo salario: %.2f\n", reajusteSalarial);
    printf("Reajuste ganho: R$ %.2f\n", salario *0.12);
    printf("Em percentual: 12 %%\n");
  }
  else if (salario > 800 && salario <= 1200){
    reajusteSalarial = salario + (salario * 0.1);

    printf("Novo salario: %.2f\n", reajusteSalarial);
    printf("Reajuste ganho: R$ %.2f\n", salario * 0.1);
    printf("Em percentual: 10 %%\n");
  }
  else if (salario > 1200 && salario <= 2000){
    reajusteSalarial = salario + (salario * 0.07);

    printf("Novo salario: %.2f\n", reajusteSalarial);
    printf("Reajuste ganho: R$ %.2f\n", salario * 0.07);
    printf("Em percentual: 7 %%\n");
  }
  else if (salario > 2000){
    reajusteSalarial = salario + (salario * 0.04);

    printf("Novo salario: %.2f\n", reajusteSalarial);
    printf("Reajuste ganho: R$ %.2f\n", salario * 0.04);
    printf("Em percentual: 4 %%\n");
  }

  //Evitando erros:
  else{
      printf("ERRO!\n Por favor inserir um salario com valor maior que 0.\n");
  }

  return 0;
}
