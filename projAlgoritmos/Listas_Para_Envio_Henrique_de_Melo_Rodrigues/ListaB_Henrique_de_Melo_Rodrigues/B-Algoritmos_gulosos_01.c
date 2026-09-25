#include <stdio.h>

typedef struct {
    int valor;
    int quantidade;
} Moeda;

void troco_moedas(int centavos);

int main() {
    int centavos;
    printf("Centavos: ");
    if (scanf("%d", &centavos) != 1 || centavos <= 0) return 0;

    troco_moedas(centavos);

    return 0;
}

void troco_moedas(int centavos) {
    Moeda moedas[] = {
        {50, 0},
        {25, 0},
        {10, 0},
        {5, 0},
        {1, 0}
    };
    int totalMoedas = sizeof(moedas) / sizeof(moedas[0]);

    for (int i = 0; i < totalMoedas; i++) {
        moedas[i].quantidade = centavos / moedas[i].valor;
        centavos = centavos % moedas[i].valor;
    }

    int primeiro = 1;
    for (int i = 0; i < totalMoedas; i++) {
        if (moedas[i].quantidade > 0) {
            if (!primeiro) {
                printf(" / ");
            }
            printf("%d moeda(s) de %dc", moedas[i].quantidade, moedas[i].valor);
            primeiro = 0;
        }
    }
    printf("\n");
}
