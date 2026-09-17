#include <stdio.h>
#include <stdlib.h>

int busca_binaria_rec(int vet[],int inicio, int fim, int x);
int *preenche_vetor(int *tamanhoVetor);

int main(){
    int fim, busca;
    int *vetor = preenche_vetor(&fim);
    printf("Valor a ser encontrado: ");
    scanf("%d", &busca);
     
    int resultado = busca_binaria_rec(vetor, 0, fim - 1, busca);

    printf("%d\n", resultado);


    return 0;
}


int *preenche_vetor(int *tamanhoVetor){
    printf("Tamanho do vetor: ");
    scanf("%d", tamanhoVetor);

    int *vetor = (int *)malloc((*tamanhoVetor) * sizeof(int));


    printf("Insira os %d valores do vetor: ", *tamanhoVetor);
    for (int i = 0; i < *tamanhoVetor; i++) {
        scanf("%d", &vetor[i]);
    }
    return vetor;
}

int busca_binaria_rec(int vet[],int inicio, int fim, int x){
    int meio = (inicio + fim) / 2;

    if(inicio > fim) return -1;

    if(vet[meio] == x) return meio;

    else if(vet[meio] > x){
        return busca_binaria_rec(vet, inicio, meio - 1, x);
    }
    else{
        return busca_binaria_rec(vet, meio + 1, fim, x);
    }

}