#include <stdio.h>

/*
 * Exercicio 3 [Facil] - Incremento (passagem por valor)
 * Perguntas:
 *   - Por que nao foi impresso 6?
 *     Porque em C a passagem de parametros para tipos primitivos e feita por valor
 *     (copia). A funcao incrementa recebe uma copia do valor de n.
 *   - O que o parametro formal x representa na memoria?
 *     O parametro formal x e uma variavel local criada na pilha de execucao (stack)
 *     da funcao incrementa, residindo em um endereco de memoria distinto da variavel n
 *     da funcao main. Modificacoes em x afetam apenas essa copia local.
 */

void incrementa(int x);

int main() {
    int n = 5;
    incrementa(n);
    printf("%d\n", n);

    return 0;
}

void incrementa(int x) {
    x++;
}
