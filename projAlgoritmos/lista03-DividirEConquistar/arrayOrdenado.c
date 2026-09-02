#include <stdio.h>

int esta_ordenado(int arr[], int inicio, int fim);
void exibeVetor(int arr[], int tamahoVetor);

int main(){
    int vetor[] = {7, 9, 12, 34, 41, 55};

    int fim = sizeof(vetor) / sizeof(vetor[0]);
    exibeVetor(vetor, fim);

    if (esta_ordenado(vetor, 0, fim - 1)){
        printf("O vetor esta ordenado\n");
    }
    else printf("O vetor nao esta ordenado\n");

    return 0;
}


int esta_ordenado(int arr[], int inicio, int fim){
    if(inicio >= fim) return 1;

    int meio = (inicio + fim) / 2;
    if (!esta_ordenado(arr, inicio, meio)) return 0;
    if (!esta_ordenado(arr, meio + 1, fim)) return 0;

    return arr[meio] <= arr[meio + 1];
    
}

void exibeVetor(int arr[], int tamanhoVetor){

    for (int i = 0; i < tamanhoVetor; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}