#include <stdio.h>

void preenche_vetor(int vet[], int n);
int menor_dc(int vet[], int inicio, int fim);

int main() {
    int n;
    printf("Tamanho do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int vetor[n];
    printf("Elementos do vetor: ");
    preenche_vetor(vetor, n);

    int menor = menor_dc(vetor, 0, n - 1);
    printf("Menor: %d\n", menor);

    return 0;
}

void preenche_vetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

int menor_dc(int vet[], int inicio, int fim) {
    if (inicio == fim) {
        return vet[inicio];
    }
    if (fim - inicio == 1) {
        return (vet[inicio] < vet[fim]) ? vet[inicio] : vet[fim];
    }

    int meio = (inicio + fim) / 2;
    int menorEsq = menor_dc(vet, inicio, meio);
    int menorDir = menor_dc(vet, meio + 1, fim);

    return (menorEsq < menorDir) ? menorEsq : menorDir;
}
