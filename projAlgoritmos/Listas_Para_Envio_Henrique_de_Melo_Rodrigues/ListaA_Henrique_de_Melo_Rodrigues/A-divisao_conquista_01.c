#include <stdio.h>
#include <stdlib.h>

int maior_dc(int vet[], int inicio, int fim);
int *preenche_vetor(int *tamanhoVetor);

int main() {
    int fim, maior;
    int *vetor = preenche_vetor(&fim);

    if (fim <= 0) {
        printf("Tamanho invalido.\n");
        free(vetor);
        return 1;
    }

    maior = maior_dc(vetor, 0, fim - 1);
    printf("Maior: %d\n", maior);

    free(vetor);
    return 0;
}

int *preenche_vetor(int *tamanhoVetor) {
    printf("Tamanho do vetor: ");
    scanf("%d", tamanhoVetor);

    int *vetor = (int *)malloc((*tamanhoVetor) * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    printf("Insira os %d valores do vetor: ", *tamanhoVetor);
    for (int i = 0; i < *tamanhoVetor; i++) {
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

int maior_dc(int vet[], int inicio, int fim) {
    if (inicio == fim) {
        return vet[inicio];
    }

    int metade = (inicio + fim) / 2;
    int maiorEsquerda = maior_dc(vet, inicio, metade);
    int maiorDireita = maior_dc(vet, metade + 1, fim);

    return (maiorEsquerda > maiorDireita) ? maiorEsquerda : maiorDireita;
}