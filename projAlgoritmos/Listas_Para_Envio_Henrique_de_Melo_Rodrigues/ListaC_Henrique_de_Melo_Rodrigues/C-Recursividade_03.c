#include <stdio.h>

void preenche_vetor(int vet[], int n);
int somavet(const int vet[], int n);

int main() {
    int n;
    printf("Tamanho do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int vetor[n];
    printf("Elementos do vetor: ");
    preenche_vetor(vetor, n);

    printf("Soma: %d\n", somavet(vetor, n));

    return 0;
}

void preenche_vetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

int somavet(const int vet[], int n) {
    if (n == 1) {
        return vet[0];
    }
    return vet[n - 1] + somavet(vet, n - 1);
}
