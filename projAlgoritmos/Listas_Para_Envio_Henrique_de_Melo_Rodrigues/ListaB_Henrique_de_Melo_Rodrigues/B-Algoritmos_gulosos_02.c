#include <stdio.h>
#include <stdbool.h>

void preenche_vetor(int vet[], int n);
bool pode_pagar(int valor, int notas[], int n);

int main() {
    int valor, n;
    printf("Valor: ");
    if (scanf("%d", &valor) != 1) return 0;

    printf("Quantidade de notas: ");
    if (scanf("%d", &n) != 1) return 0;

    int notas[n];
    printf("Notas em ordem decrescente: ");
    preenche_vetor(notas, n);

    if (pode_pagar(valor, notas, n)) {
        printf("Possivel\n");
    } else {
        printf("Impossivel\n");
    }

    return 0;
}

void preenche_vetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

bool pode_pagar(int valor, int notas[], int n) {
    if (valor == 0) return true;

    for (int i = 0; i < n; i++) {
        if (notas[i] <= 0) continue;
        int qtd = valor / notas[i];
        valor = valor % notas[i];
    }

    return valor == 0;
}
