#include <stdio.h>

void preenche_vetor(int vet[], int n);
void selecao_direta(int n, int a[]);

int main() {
    int n;
    printf("Tamanho do vetor: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int vetor[n];
    printf("Elementos do vetor: ");
    preenche_vetor(vetor, n);

    selecao_direta(n, vetor);

    return 0;
}

void preenche_vetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

void selecao_direta(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[k]) {
                k = j;
            }
        }
        int temp = a[i];
        a[i] = a[k];
        a[k] = temp;

        printf("Passo %d: k = %d -> ", i, k);
        for (int m = 0; m < n; m++) {
            printf("%d", a[m]);
            if (m < n - 1) printf(" ");
        }
        printf("\n");
    }
}
