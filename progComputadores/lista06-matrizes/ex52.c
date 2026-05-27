#include <stdio.h>

#define LINHAS 12
#define COLUNAS 12

void lerMatriz(float m[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++)
        for (int j = 0; j < COLUNAS; j++)
            scanf("%f", &m[i][j]);
}

void alterarLinha(float m[LINHAS][COLUNAS], int linha) {
    for (int j = 0; j < COLUNAS; j++)
        scanf("%f", &m[linha][j]);
}

void somarMatriz(float m[LINHAS][COLUNAS], int linha, float *soma) {
    *soma = 0;
    for (int j = 0; j < COLUNAS; j++)
        *soma += m[linha][j];
}

int main() {
    int alteraLinha;
    char escolhaUsuario;
    float matriz[LINHAS][COLUNAS], soma;

    scanf("%d %c", &alteraLinha, &escolhaUsuario);
    if(0 > alteraLinha && alteraLinha > 12){
        return 0;
    }
    lerMatriz(matriz);
    somarMatriz(matriz, alteraLinha, &soma);

    switch (escolhaUsuario) {
        case 'S':
            printf("%.1f\n", soma);
            break;
        case 'M':
            printf("%.1f\n", soma / COLUNAS);
            break;
    }

    return 0;
}
