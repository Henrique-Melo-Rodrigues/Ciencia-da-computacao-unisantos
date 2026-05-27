#include <stdio.h>

#define MAX 100

int minimo(int a, int b, int c, int d) {
    int m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    if (d < m) m = d;
    return m;
}

void preencherMatriz(int m[MAX][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            m[i][j] = minimo(i, j, n - 1 - i, n - 1 - j) + 1;
}

void imprimirMatriz(int m[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > 0) printf(" ");
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int n;
    int matriz[MAX][MAX];

    while (scanf("%d", &n) == 1 && n != 0) {
        preencherMatriz(matriz, n);
        imprimirMatriz(matriz, n);
    }

    return 0;
}
