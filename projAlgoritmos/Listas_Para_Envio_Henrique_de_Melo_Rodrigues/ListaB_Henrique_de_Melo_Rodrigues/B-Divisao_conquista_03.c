#include <stdio.h>

void preenche_vetor(int vet[], int n);
int busca_bin_conta(int vet[], int n, int x, int *divisoes);

int main() {
    int n, x, divisoes = 0;
    printf("Tamanho do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int vetor[n];
    printf("Elementos ordenados do vetor: ");
    preenche_vetor(vetor, n);

    printf("Valor a buscar (x): ");
    if (scanf("%d", &x) != 1) return 0;

    int indice = busca_bin_conta(vetor, n, x, &divisoes);
    printf("indice %d, %d divisoes\n", indice, divisoes);

    return 0;
}

void preenche_vetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

int busca_bin_conta(int vet[], int n, int x, int *divisoes) {
    int inicio = 0, fim = n - 1;
    *divisoes = 0;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vet[meio] == x) {
            return meio;
        }
        (*divisoes)++;
        if (vet[meio] > x) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return -1;
}
