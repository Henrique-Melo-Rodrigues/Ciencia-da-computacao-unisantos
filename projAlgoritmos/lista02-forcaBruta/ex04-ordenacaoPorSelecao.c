#include <stdio.h>

void ordenar_selecao(int vetor[], int tamanho);
void imprimir_vetor(int vetor[], int tamanho);

int main(){
    int vetor[] = {5, 2, 8, 1, 9, 3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    ordenar_selecao(vetor, tamanho);

    printf("Vetor ordenado: ");
    imprimir_vetor(vetor, tamanho);

    return 0;
}

void ordenar_selecao(int vetor[], int tamanho){
    int aux;

    for (int i = 0; i < tamanho - 1; i++){
        int menor = i;

        for (int j = i + 1; j < tamanho; j++){
            if (vetor[j] < vetor[menor]){
                menor = j;
            }
        }

        if (menor != i){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }

        printf("Iteracao %d: ", i + 1);
        imprimir_vetor(vetor, tamanho);
    }
}

void imprimir_vetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
