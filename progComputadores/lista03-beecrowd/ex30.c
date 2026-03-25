/*
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que
serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos
estão fora do intervalo, mostrando essas informações.

Entrada:
  A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica
  o número de casos de teste.

  Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).

Saída:
  Para cada caso, imprima quantos números estão dentro (in) e quantos valores
  estão fora (out) do intervalo.
*/

#include <stdio.h>

int main() {
  int quantNum, numeros, X;
  int in, out; //[10,20] ou fora
  scanf("%d", &quantNum);
  in = 0;
  out = 0;
  numeros = 0;

  while (numeros < quantNum) {
    scanf("%d", &X);
    if (X >= 10 && X <= 20) {
      in++;
    } else {
      out++;
    }
    numeros++;
  }
  printf("%d in\n", in);
  printf("%d out\n", out);

  return 0;
}
