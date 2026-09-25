#include <stdio.h>

/*
 * Exercicio 3 [Facil] - Sobreposicao de Subproblemas (Teorico)
 * 
 * Arvore de chamadas de fib(5) na recursao ingenua:
 * 
 *                                   fib(5)
 *                                 /        \
 *                         fib(4)            fib(3)
 *                        /      \           /    \
 *                    fib(3)    fib(2)    fib(2) fib(1)
 *                    /    \    /    \    /    \
 *                fib(2) fib(1)fib(1)fib(0)fib(1)fib(0)
 *                /    \
 *             fib(1) fib(0)
 * 
 * Respostas:
 * (a) Quantas vezes cada subproblema fib(0)..fib(3) e chamado/resolvido:
 *     - fib(3): 2 vezes
 *     - fib(2): 3 vezes
 *     - fib(1): 5 vezes
 *     - fib(0): 3 vezes
 * 
 * (b) Numero total de chamadas (incluindo a inicial fib(5)):
 *     1 [fib(5)] + 1 [fib(4)] + 2 [fib(3)] + 3 [fib(2)] + 5 [fib(1)] + 3 [fib(0)] = 15 chamadas.
 * 
 * (c) Quantas chamadas de calculo sobrariam com memoization:
 *     Apenas 5 chamadas de calculo original (para os subproblemas de fib(0) ate fib(4)),
 *     pois as chamadas subsequentes aos mesmos estados consultam a tabela em O(1).
 */

int main() {
    printf("--- Arvore de Chamadas Recursivas de fib(5) ---\n\n");
    printf("                                  fib(5)\n");
    printf("                                /        \\\n");
    printf("                        fib(4)            fib(3)\n");
    printf("                       /      \\           /    \\\n");
    printf("                   fib(3)    fib(2)    fib(2) fib(1)\n");
    printf("                   /    \\    /    \\    /    \\\n");
    printf("               fib(2) fib(1)fib(1)fib(0)fib(1)fib(0)\n");
    printf("               /    \\\n");
    printf("            fib(1) fib(0)\n\n");

    printf("Respostas:\n");
    printf("(a) Ocorrencias de subproblemas repetidos:\n");
    printf("    fib(3): 2 vezes\n");
    printf("    fib(2): 3 vezes\n");
    printf("    fib(1): 5 vezes\n");
    printf("    fib(0): 3 vezes\n\n");

    printf("(b) Total de chamadas recursivas (incluindo a raiz): 15 chamadas\n\n");

    printf("(c) Chamadas com memoization:\n");
    printf("    Apenas 5 chamadas de calculo (fib(0) a fib(4)); as demais sao acessos O(1) na tabela.\n");

    return 0;
}
