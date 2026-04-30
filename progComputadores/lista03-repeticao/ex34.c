/*
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e
precisa de sua ajuda para organizar os experimentos de um laboratório o qual
ela é responsável. Ela quer saber no final do ano, quantas cobaias foram
utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e
coelhos. Para obter estas informações, ela sabe exatamente o número de
experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade
de cobaias utilizadas em cada experimento.

Entrada
A primeira linha de entrada contém um valor inteiro N que indica os vários
casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia
(1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um
caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo
C:Coelho).

Saída
Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia
utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas,
sendo que o percentual deve ser apresentado com dois dígitos após o ponto.
 */
#include <stdio.h>
int quantTestes, quantCobaias, rato, coelho, sapo;

char tipoCobaia;

int main() {
  scanf("%d", &quantTestes);
  if (1 < quantTestes && quantTestes <= 15) {
    sapo = 0, rato = 0, coelho = 0;
    int i = 0;
    while (i < quantTestes) {
      scanf("%d %c", &quantCobaias, &tipoCobaia);
      if (tipoCobaia == 'R') {
        rato += quantCobaias;
      } else if (tipoCobaia == 'C') {
        coelho += quantCobaias;
      } else if (tipoCobaia == 'S') {
        sapo += quantCobaias;
      }
      i++;
    }
    int total = rato + coelho + sapo;

    float percentCoelhos = (coelho * 100.0) / total;
    float percentRatos = (rato * 100.0) / total;
    float percentSapos = (sapo * 100.0) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", percentCoelhos);
    printf("Percentual de ratos: %.2f %%\n", percentRatos);
    printf("Percentual de sapos: %.2f %%\n", percentSapos);
  }
  return 0;
}
