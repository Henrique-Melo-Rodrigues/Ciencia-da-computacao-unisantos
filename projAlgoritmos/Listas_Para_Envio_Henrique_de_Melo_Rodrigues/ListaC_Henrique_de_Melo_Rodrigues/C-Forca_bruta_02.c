#include <stdio.h>

void preenche_vetor(int vet[], int n);
void imprime_vetor(int vet[], int n);
void bubblesort(int n, int a[]);

int main() {
    int n;
    printf("Tamanho do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int vetor[n];
    printf("Elementos do vetor: ");
    preenche_vetor(vetor, n);

    bubblesort(n, vetor);

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

void bubblesort(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        imprime_vetor(a, n);
    }
}
