#include <stdio.h>

/*
 * Exercicio 2 [Facil] - Quando o guloso falha (contraexemplo)
 * 
 * Perguntas:
 * - Por que o algoritmo guloso falha aqui?
 *   O algoritmo guloso toma a decisao localmente otima imediata (pegar a maior nota, 5),
 *   mas essa escolha impede alcancar a combinacao globalmente otima (4 + 4 = 8).
 *   O sistema de moedas {5, 4, 1} nao possui a propriedade da escolha gulosa (nao e canonico).
 * 
 * - Qual propriedade do conjunto {100, 50, 20, 10, 5, 2, 1} garante que o guloso funciona?
 *   O sistema monetario real e um "sistema canonico de moedas" (canonical coin system).
 *   Em sistemas canonicos, qualquer valor V trocado pelo guloso utiliza o menor numero
 *   possivel de moedas/cedulas.
 */

void preenche_vetor(int vet[], int n);
void troco_geral(int valor, int notas[], int n);

int main() {
    printf("(a) Guloso: 5 + 1 + 1 + 1 = 8 -> 4 notas\n");
    printf("(b) Otimo:  4 + 4 = 8         -> 2 notas\n\n");

    printf("(c) Confirmacao via codigo:\n");
    int valor, n;
    printf("Valor: ");
    if (scanf("%d", &valor) != 1) return 0;

    printf("Quantidade de notas: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int notas[n];
    printf("Notas em ordem decrescente: ");
    preenche_vetor(notas, n);

    troco_geral(valor, notas, n);

    return 0;
}

void preenche_vetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

void troco_geral(int valor, int notas[], int n) {
    int primeiro = 1;
    for (int i = 0; i < n; i++) {
        if (notas[i] <= 0) continue;
        int qtd = valor / notas[i];
        valor = valor % notas[i];
        if (qtd > 0) {
            if (!primeiro) {
                printf(" / ");
            }
            printf("%d nota(s) de %d", qtd, notas[i]);
            primeiro = 0;
        }
    }
    printf("\n");
}
