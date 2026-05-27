#include <stdio.h>

#define LINHAS 12
#define COLUNAS 12

void lerMatriz(float m[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
            scanf("%f", &m[i][j]);
}

void somarMatriz(float m[LINHAS][COLUNAS], int coluna, float *soma) {
    *soma = 0;
    for (int i = 0; i < LINHAS; i++)
        *soma += m[i][coluna];
}

int main() {
    int C;
    char T;
    float matriz[LINHAS][COLUNAS], soma;

    scanf("%d %c", &C, &T);
    lerMatriz(matriz);
    somarMatriz(matriz, C, &soma);

    switch (T) {
        case 'S':
            printf("%.1f\n", soma);
            break;
        case 'M':
            printf("%.1f\n", soma / LINHAS);
            break;
    }

    return 0;
}
