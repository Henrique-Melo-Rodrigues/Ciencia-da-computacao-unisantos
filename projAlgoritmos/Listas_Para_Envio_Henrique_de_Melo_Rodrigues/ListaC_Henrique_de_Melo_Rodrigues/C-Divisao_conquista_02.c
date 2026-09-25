#include <stdio.h>

void preenche_vetor(int vet[], int n);
int busca_binaria_iter(int vet[], int n, int x);

int main() {
    int n, x;
    printf("Tamanho do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int vetor[n];
    printf("Elementos ordenados do vetor: ");
    preenche_vetor(vetor, n);

    printf("Valor a buscar (x): ");
    if (scanf("%d", &x) != 1) return 0;

    int indice = busca_binaria_iter(vetor, n, x);
    printf("%d\n", indice);

    return 0;
}

void preenche_vetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

int busca_binaria_iter(int vet[], int n, int x) {
    int inicio = 0, fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vet[meio] == x) {
            return meio;
        }
        if (vet[meio] > x) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return -1;
}
