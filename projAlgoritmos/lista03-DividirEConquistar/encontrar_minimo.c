#include <stdio.h>


int encontrar_minimo(int arr[], int inicio, int fim);

void exibeVetor(int arr[], int tamahoVetor);

int main(){
    int vetor[] = {6, 3, 7, 12, 14, 2,15, 19, 26, 30};

    
    int fim = sizeof(vetor) / sizeof(vetor[0]);
    exibeVetor(vetor, fim);

    printf("O menor valor desse vetor eh %d\n", encontrar_minimo(vetor, 0, fim - 1));

    return 0;
}

int encontrar_minimo(int arr[], int inicio, int fim){
    if (fim - inicio <=1){
        if(arr[inicio] < arr[fim]) return arr[inicio];

        else return arr[fim];
        
    }

    int meio = (inicio + fim) / 2;

    int meioParaInicio = encontrar_minimo(arr, inicio, meio);
    int meioParaFim = encontrar_minimo(arr, meio + 1, fim - 1);

    if (meioParaInicio < meioParaFim) return meioParaInicio;
    else return meioParaFim;

}

void exibeVetor(int arr[], int tamanhoVetor){

    for (int i = 0; i < tamanhoVetor; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
}