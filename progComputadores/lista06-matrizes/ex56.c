#include <stdio.h>

#define MAX 70

void preencherMatriz(int m[MAX][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1)
                m[i][j] = 2;
            else if (i == j)
                m[i][j] = 1;
            else
                m[i][j] = 3;
        }
}

void imprimirMatriz(int m[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d", m[i][j]);
        printf("\n");
    }
}

int main() {
    int n;
    int matriz[MAX][MAX];

    while (scanf("%d", &n) == 1) {
        preencherMatriz(matriz, n);
        imprimirMatriz(matriz, n);
    }

    return 0;
}
