#include <stdio.h>

void simula_busca_binaria(int n, int x, const char *caso) {
    printf("--- Caso %s: n = %d, x = %d ---\n", caso, n, x);
    printf("Iteracao | Inicio | Final | Meio | v[meio] | Acao\n");
    printf("--------------------------------------------------\n");

    int inicio = 0, fim = n - 1;
    int iteracao = 0;
    int encontrado = -1;

    while (inicio <= fim) {
        iteracao++;
        int meio = (inicio + fim) / 2;
        int valor = meio; // v[i] = i

        if (valor == x) {
            printf("   %2d    |   %2d   |   %2d  |  %2d  |   %2d    | Encontrado!\n", 
                   iteracao, inicio, fim, meio, valor);
            encontrado = meio;
            break;
        } else if (valor > x) {
            printf("   %2d    |   %2d   |   %2d  |  %2d  |   %2d    | Esquerda (final = %d)\n", 
                   iteracao, inicio, fim, meio, valor, meio - 1);
            fim = meio - 1;
        } else {
            printf("   %2d    |   %2d   |   %2d  |  %2d  |   %2d    | Direita (inicio = %d)\n", 
                   iteracao, inicio, fim, meio, valor, meio + 1);
            inicio = meio + 1;
        }
    }

    printf("Resultado: indice devolvido = %d (%d iteracao/oes)\n\n", encontrado, iteracao);
}

int main() {
    simula_busca_binaria(9, 3, "(a)");
    simula_busca_binaria(14, 7, "(b)");
    simula_busca_binaria(15, 7, "(c)");

    printf("Desafio:\n");
    printf("- Iteracoes realizadas: (a) 4 iteracoes, (b) 4 iteracoes, (c) 1 iteracao.\n");
    printf("- O que muda entre n par e impar:\n");
    printf("  Quando o tamanho do intervalo eh impar (como n=15 com indices 0..14),\n");
    printf("  ha um elemento central exato (meio = 7), dividindo o vetor simetricamente\n");
    printf("  em 7 elementos a esquerda e 7 a direita. Quando eh par (n=14 com 0..13),\n");
    printf("  a divisao inteira gera particoes assimetricas (6 e 7 elementos).\n");

    return 0;
}
