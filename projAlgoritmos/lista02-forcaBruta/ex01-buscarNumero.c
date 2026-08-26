#include <stdio.h>

void buscar_num(int vetor[], int tamanho, int busca){
    int encontrado = 0;
    for (int i = 0; i < tamanho; i++){
        if (busca == vetor[i]){
            printf("Achei o numero %d na posicao %d do vetor\n", busca, i);
            encontrado++;
        }
    }
    if (encontrado == 0){
        printf("Nao achei nenhum numero %d no vetor...", busca);
    }

}

int main(){
    int vetor[] = {1, 5, 6 ,76, 7, 2, 1, 6, 5, 4, 13};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int busca, *ptrBusca;
    ptrBusca = &busca;
    printf("Numero que deseja buscar no array: ");
    scanf("%d", ptrBusca);
    
    buscar_num(vetor,  tamanho, busca);

    return 0;
}