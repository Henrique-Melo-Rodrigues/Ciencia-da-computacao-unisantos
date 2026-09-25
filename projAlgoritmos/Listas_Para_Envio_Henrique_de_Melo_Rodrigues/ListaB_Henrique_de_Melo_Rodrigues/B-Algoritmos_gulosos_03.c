#include <stdio.h>

/*
 * Exercicio 3 [Facil] - Mochila Fracionaria (Calculo Manual)
 * Dados:
 *   Item 1: v = 100, w = 10 -> r = 10.0
 *   Item 2: v = 200, w = 20 -> r = 10.0
 *   Item 3: v = 120, w = 30 -> r = 4.0
 *   Capacidade W = 50
 */

int main() {
    printf("--- Mochila Fracionaria (Maior Razao Valor/Peso) ---\n\n");
    printf("Razoes calculadas (r = v / w):\n");
    printf("  r1 = 100 / 10 = 10.0\n");
    printf("  r2 = 200 / 20 = 10.0\n");
    printf("  r3 = 120 / 30 = 4.0\n\n");

    printf("Razoes ordenadas decrescentemente: {10.0, 10.0, 4.0}\n");
    printf("Ordem de selecao: Itens 1 e 2 (empate), depois Item 3.\n\n");

    printf("Preenchimento da mochila (W = 50):\n");
    printf("  1. Item 1: peso 10, fracao f1 = 1.0 -> valor = 100, peso acum = 10\n");
    printf("  2. Item 2: peso 20, fracao f2 = 1.0 -> valor = 200, peso acum = 30\n");
    printf("  3. Item 3: sobra espaco 20, peso do item 30 -> fracao f3 = 20/30 = 2/3\n");
    printf("     -> valor = (2/3) * 120 = 80, peso acum = 50 (capacidade exata)\n\n");

    printf("Fracoes finais: f1 = 1, f2 = 1, f3 = 2/3\n");
    printf("Peso total: 10 + 20 + (2/3)*30 = 50\n");
    printf("Valor total obtido: 100 + 200 + 80 = 380 (OTIMO)\n");

    return 0;
}
