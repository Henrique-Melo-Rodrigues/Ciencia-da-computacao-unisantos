#include <stdio.h>

/*
 * Exercicio 3 [Facil] - Mochila Fracionaria (Calculo Manual)
 * Dados:
 *   Item 1: v = 60,  w = 10 -> r = 6.0
 *   Item 2: v = 150, w = 20 -> r = 7.5
 *   Item 3: v = 120, w = 30 -> r = 4.0
 *   Item 4: v = 200, w = 40 -> r = 5.0
 *   Capacidade W = 50
 */

int main() {
    printf("Mochila Fracionaria - Tres Estrategias (W = 50)\n\n");

    printf("(a) Maior valor primeiro:\n");
    printf("    Ordem de selecao: Item 4 (v=200), Item 2 (v=150)\n");
    printf("    Item 4: peso 40, fracao 1.0 -> valor = 200, peso acumulado = 40\n");
    printf("    Item 2: peso 20, fracao 10/20 = 0.5 -> valor = 75, peso acumulado = 50\n");
    printf("    Valor total obtido: 275\n");
    printf("    Solucao otima? Nao.\n\n");

    printf("(b) Menor peso primeiro:\n");
    printf("    Ordem de selecao: Item 1 (w=10), Item 2 (w=20), Item 3 (w=30)\n");
    printf("    Item 1: peso 10, fracao 1.0 -> valor = 60, peso acumulado = 10\n");
    printf("    Item 2: peso 20, fracao 1.0 -> valor = 150, peso acumulado = 30\n");
    printf("    Item 3: peso 30, fracao 20/30 = 2/3 -> valor = 80, peso acumulado = 50\n");
    printf("    Valor total obtido: 290\n");
    printf("    Solucao otima? Nao.\n\n");

    printf("(c) Maior razao valor/peso (v/w) primeiro:\n");
    printf("    Razoes: r1=6.0, r2=7.5, r3=4.0, r4=5.0\n");
    printf("    Ordem de selecao: Item 2 (r=7.5), Item 1 (r=6.0), Item 4 (r=5.0)\n");
    printf("    Item 2: peso 20, fracao 1.0 -> valor = 150, peso acumulado = 20\n");
    printf("    Item 1: peso 10, fracao 1.0 -> valor = 60, peso acumulado = 30\n");
    printf("    Item 4: peso 40, fracao 20/40 = 0.5 -> valor = 100, peso acumulado = 50\n");
    printf("    Valor total obtido: 310\n");
    printf("    Solucao otima? Sim (estrategia gulosa otima para mochila fracionaria).\n");

    return 0;
}
