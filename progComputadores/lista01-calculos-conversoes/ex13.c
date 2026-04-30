/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de
Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente
“Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem 
"Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 
dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. 
Imprima sempre o final de linha após cada mensagem.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = pow(b, 2) - (4 * a * c);
    double raizDeDelta = sqrt(delta);

    if(a <= 0 || raizDeDelta <=0){
        printf("Impossivel calcular.\n");
    }

    else{

        double R1 = (-b + raizDeDelta) / (2 * a);
        double R2 = (-b - raizDeDelta) / (2 * a);

        printf("R1 = %.5lf\n", R1);
        printf("R2 =  %.5lf\n", R2);

    }

    return 0;
}
