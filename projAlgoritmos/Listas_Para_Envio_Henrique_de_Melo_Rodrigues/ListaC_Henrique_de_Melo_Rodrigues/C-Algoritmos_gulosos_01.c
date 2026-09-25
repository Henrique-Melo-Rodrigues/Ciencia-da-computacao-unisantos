#include <stdio.h>

typedef struct {
    int valor;
    int quantidade;
} Nota;

void troco(int valor);

int main() {
    int valor;
    printf("Valor do troco: ");
    if (scanf("%d", &valor) != 1 || valor <= 0) return 0;

    troco(valor);

    return 0;
}

void troco(int valor) {
    Nota notas[] = {
        {100, 0},
        {50, 0},
        {20, 0},
        {10, 0},
        {5, 0},
        {2, 0},
        {1, 0}
    };
    int totalNotas = sizeof(notas) / sizeof(notas[0]);

    for (int i = 0; i < totalNotas; i++) {
        notas[i].quantidade = valor / notas[i].valor;
        valor = valor % notas[i].valor;
    }

    int primeiro = 1;
    for (int i = 0; i < totalNotas; i++) {
        if (notas[i].quantidade > 0) {
            if (!primeiro) {
                printf(" / ");
            }
            printf("%d nota(s) de R$%d", notas[i].quantidade, notas[i].valor);
            primeiro = 0;
        }
    }
    printf("\n");
}
