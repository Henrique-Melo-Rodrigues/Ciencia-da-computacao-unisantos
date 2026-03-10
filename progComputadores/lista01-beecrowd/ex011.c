/*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, 
 * p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais, 
 * segundo a fórmula:  Raiz quadrada de ( (x2 - x1) ao quadrado + (y2 - y1) ao quadrado ) 
 *  
 *  ENTRADA: 
      O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois 
      valores de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto 
      flutuante x2 y2.

    SAIDA:
      Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 
      casas decimais.

 */

#include <stdio.h>
#include <math.h>

int main(){
  double x1, y1;
  double x2, y2;

  scanf("%lf %lf", &x1, &y1);
  scanf("%lf %lf", &x2, &y2);
  
  double p1 = pow(x2 - x1, 2);
  double p2 = pow(y2 - y1, 2);
  double somaDistancia = p1 + p2;
  double distEntrePontos = sqrt(somaDistancia);

  printf("%.4lf\n", distEntrePontos);


  return 0;
}
