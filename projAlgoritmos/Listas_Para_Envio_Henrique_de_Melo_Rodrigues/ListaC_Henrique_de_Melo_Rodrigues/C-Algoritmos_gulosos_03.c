#include <stdio.h>

/*
 * Exercicio 3 [Facil] - Mochila Fracionaria (Calculo Manual)
 * Dados:
 *   Item 1: v1 = 10, w1 = 5 -> r1 = 10/5 = 2.0
 *   Item 2: v2 = 40, w2 = 4 -> r2 = 40/4 = 10.0
 *   Item 3: v3 = 30, w3 = 6 -> r3 = 30/6 = 5.0
 *   Item 4: v4 = 50, w4 = 3 -> r4 = 50/3 = 16.67
 *   Capacidade W = 10
 */

int main() {
    printf("--- Mochila Fracionaria (Maior Razao Valor/Peso) ---\n\n");
    printf("Razoes calculadas:\n");
    printf("  r1 = 10/5 = 2.00\n");
    printf("  r2 = 40/4 = 10.00\n");
    printf("  r3 = 30/6 = 5.00\n");
    printf("  r4 = 50/3 = 16.67\n\n");

    printf("Ordem decrescente de razao: Item 4, Item 2, Item 3, Item 1\n\n");

    printf("Preenchimento da mochila (W = 10):\n");
    printf("  1. Item 4: peso 3, fracao f4 = 1.0 -> valor = 50, peso acum = 3\n");
    printf("  2. Item 2: peso 4, fracao f2 = 1.0 -> valor = 40, peso acum = 7\n");
    printf("  3. Item 3: sobra espaco 3, peso do item 6 -> fracao f3 = 3/6 = 1/2\n");
    printf("     -> valor = (1/2) * 30 = 15, peso acum = 10 (capacidade atingida)\n\n");

    printf("Fracoes finais: f4 = 1, f2 = 1, f3 = 1/2, f1 = 0\n");
    printf("Peso total: 3 + 4 + 3 = 10\n");
    printf("Valor total obtido: 50 + 40 + (1/2)*30 = 105 (OTIMO)\n");

    return 0;
}
