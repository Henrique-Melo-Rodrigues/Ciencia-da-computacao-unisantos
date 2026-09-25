#include <stdio.h>

void preenche_vetor(int vet[], int n);
void imprime_vetor(int vet[], int n);
void insercao(int n, int a[]);

int main() {
    int n;
    printf("Tamanho do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int vetor[n];
    printf("Elementos do vetor: ");
    preenche_vetor(vetor, n);

    insercao(n, vetor);

    return 0;
}

void preenche_vetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

void imprime_vetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", vet[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
}

void insercao(int n, int a[]) {
    for (int i = 1; i < n; i++) {
        int aux = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > aux) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = aux;
        imprime_vetor(a, n);
    }
}
