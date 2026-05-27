#include <stdio.h>

#define LINHAS 12
#define COLUNAS 12

void lerMatriz(float m[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
            scanf("%f", &m[i][j]);
}

void somarAbaixoDiagonal(float m[LINHAS][COLUNAS], float *soma, int *qtd) {
    *soma = 0;
    *qtd = 0;
    for (int i = 1; i < LINHAS; i++)
        for (int j = 0; j < i; j++) {
            *soma += m[i][j];
            (*qtd)++;
        }
}

int main() {
    char T;
    float matriz[LINHAS][COLUNAS], soma;
    int qtd;

    scanf(" %c", &T);
    lerMatriz(matriz);
    somarAbaixoDiagonal(matriz, &soma, &qtd);

    switch (T) {
        case 'S':
            printf("%.1f\n", soma);
            break;
        case 'M':
            printf("%.1f\n", soma / qtd);
            break;
    }

    return 0;
}
