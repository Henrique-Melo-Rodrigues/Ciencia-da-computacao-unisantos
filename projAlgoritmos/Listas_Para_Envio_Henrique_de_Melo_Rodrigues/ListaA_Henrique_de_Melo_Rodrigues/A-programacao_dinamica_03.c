#include <stdio.h>

/*
 * Exercicio 3 [Facil] - Caracterizacao (Teorico) de Programacao Dinamica
 * 
 * (a) Caracteristicas necessarias:
 *   1. Subestrutura Otima: A solucao otima do problema contem em si solucoes
 *      otimas para os seus subproblemas. Na recorrencia Fn = Fn-1 + Fn-2,
 *      o calculo de Fn depende diretamente dos resultados exatos de Fn-1 e Fn-2.
 *   2. Sobreposicao de Subproblemas: O algoritmo recursivo divide o problema
 *      em subproblemas menores que sao recalculados varias vezes.
 *      Em vez de gerar novos subproblemas independentes, os mesmos subproblemas
 *      se repetem diversas vezes na arvore de recursao.
 * 
 * (b) Arvore de chamadas de fib(4):
 *                 fib(4)
 *               /        \
 *           fib(3)        (fib(2))
 *           /    \         /    \
 *       (fib(2)) (fib(1)) (fib(1)) (fib(0))
 *       /    \
 *   (fib(1)) (fib(0))
 * 
 * Subproblemas repetidos:
 *   - fib(2) aparece 2 vezes
 *   - fib(1) aparece 3 vezes
 *   - fib(0) aparece 2 vezes
 */

int main() {
    printf("--- Caracterizacao de Programacao Dinamica ---\n\n");
    printf("(a) Duas caracteristicas fundamentais:\n");
    printf("1. Subestrutura Otima: A solucao do problema global pode ser construida a partir\n");
    printf("   das solucoes otimas de seus subproblemas. Exemplo: Fn = Fn-1 + Fn-2.\n\n");
    printf("2. Sobreposicao de Subproblemas: Os mesmos subproblemas sao resolvidos multiplas\n");
    printf("   vezes durante a computacao recursiva, permitindo que memorizemos seus resultados\n");
    printf("   para evitar recalculo desnecessario.\n\n");

    printf("(b) Arvore de chamadas de fib(4):\n");
    printf("                 fib(4)\n");
    printf("               /        \\\n");
    printf("           fib(3)        [fib(2)]*\n");
    printf("           /    \\         /    \\\n");
    printf("       [fib(2)]* [fib(1)]# [fib(1)]# [fib(0)]@\n");
    printf("       /    \\\n");
    printf("   [fib(1)]# [fib(0)]@\n\n");

    printf("Chamadas realizadas:\n");
    printf("- fib(4) chama fib(3) e fib(2)\n");
    printf("- fib(3) chama fib(2) e fib(1)\n");
    printf("- fib(2) chama fib(1) e fib(0)\n\n");

    printf("Subproblemas repetidos:\n");
    printf("- fib(2) aparece 2x (*)\n");
    printf("- fib(1) aparece 3x (#)\n");
    printf("- fib(0) aparece 2x (@)\n");

    return 0;
}
