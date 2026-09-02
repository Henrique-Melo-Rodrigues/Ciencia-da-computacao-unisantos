#include <stdio.h>

int busca_binaria_iterativa(int arr[], int inicio, int fim, int alvo);

int main(){
    int inicio, fim;
    int vetor[] = {5, 8, 14, 15, 22, 33, 47, 48, 59, 60, 72, 88};
    fim = sizeof(vetor) / sizeof(vetor[0]);
    int valor;
    printf("Qual valor deseja saber a posicao de qual numero? ");
    scanf("%d", &valor);

    int resultado = busca_binaria_iterativa(vetor, 0, fim, valor);
    if (resultado == -1){
        printf("Valor %d nao encontrado no vetor\n", valor);
    }
    else{
         printf("O numero %d se encontra no indice %d do vetor\n", valor, resultado);
    }



    return 0;
}

int busca_binaria_iterativa(int arr[], int inicio, int fim, int alvo){
    int x = fim - 1;
    int meio;

    while (inicio <= x){
        meio = inicio + (x - inicio) / 2;
        if (arr[meio] == alvo){
            return meio;
        }
        if (arr[meio] > alvo){
            return busca_binaria_iterativa(arr, meio -1, x, alvo);
        }
        if (arr[meio] < alvo){
            return busca_binaria_iterativa(arr, meio + 1, x, alvo);
        }
    }

    return -1;

}



