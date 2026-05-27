#include <stdio.h>
#include <stdbool.h>

bool eh_vogal(char c)
{
    char vogais[] = "aeiou";

    for (int i = 0; vogais[i] != '\0'; i++) {
        if (c == vogais[i]) {
            return true;
        }
    }

    return false;
}

int main()
{
    char risada[51];
    char somente_vogais[51];
    int qtd_vogais = 0;
    bool engracada = true;

    scanf("%50s", risada);

    for (int i = 0; risada[i] != '\0'; i++) {
        if (eh_vogal(risada[i])) {
            somente_vogais[qtd_vogais] = risada[i];
            qtd_vogais++;
        }
    }

    for (int i = 0, j = qtd_vogais - 1; i < j; i++, j--) {
        if (somente_vogais[i] != somente_vogais[j]) {
            engracada = false;
            break;
        }
    }

    if (engracada) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}