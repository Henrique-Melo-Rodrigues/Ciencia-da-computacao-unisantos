/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
 */

#include <stdio.h>

int main(){
    float valor;
    scanf("%f", &valor);
    int valorInteiro = (valor * 100 + 0.5);

    int notasDe100 = valorInteiro / 10000;
    valorInteiro %= 10000;

    int notasDe50 = valorInteiro / 5000;
    valorInteiro %= 5000;

    int notasDe20 = valorInteiro / 2000;
    valorInteiro %= 2000;

    int notasDe10 = valorInteiro / 1000;
    valorInteiro %= 1000;

    int notasDe5 = valorInteiro / 500;
    valorInteiro %= 500;

    int notasDe2 = valorInteiro / 200;
    valorInteiro %= 200;

    int moedasDe1 = valorInteiro / 100;
    valorInteiro %= 100;

    int moedasDe50 = valorInteiro / 50;
    valorInteiro %= 50;

    int moedasDe25 = valorInteiro / 25;
    valorInteiro %= 25;

    int moedasDe10 = valorInteiro / 10;
    valorInteiro %= 10;

    int moedasDe5 = valorInteiro / 5;
    valorInteiro %= 5;

    int moedasDe01 = valorInteiro;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notasDe100);
    printf("%d nota(s) de R$ 50.00\n", notasDe50);
    printf("%d nota(s) de R$ 20.00\n", notasDe20);
    printf("%d nota(s) de R$ 10.00\n", notasDe10);
    printf("%d nota(s) de R$ 5.00\n", notasDe5);
    printf("%d nota(s) de R$ 2.00\n", notasDe2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedasDe1);
    printf("%d moeda(s) de R$ 0.50\n", moedasDe50);
    printf("%d moeda(s) de R$ 0.25\n", moedasDe25);
    printf("%d moeda(s) de R$ 0.10\n", moedasDe10);
    printf("%d moeda(s) de R$ 0.05\n", moedasDe5);
    printf("%d moeda(s) de R$ 0.01\n", moedasDe01);

    return 0;
}

