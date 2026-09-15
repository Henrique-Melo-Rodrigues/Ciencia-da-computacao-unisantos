#include <stdio.h>

int soma_nat(int);

int main(){
    unsigned int x;
    printf("Deseja somar os numeros naturais ate que termo? ");
    scanf("%u", &x);

    int soma = soma_nat(x);

    printf("Soma: %u\n", soma);

    return 0;
}

int soma_nat(int n){
    if(n == 0) return 0;

    return n + soma_nat(n - 1);
}