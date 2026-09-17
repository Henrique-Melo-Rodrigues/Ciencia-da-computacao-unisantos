#include <stdio.h>

void imprime_vetor(int v[], int n);
void preenche_vetor(int v[],int tamanhoVetor);



int main(){
    int tamanho;
    printf("Inserir tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vet[tamanho];
    preenche_vetor(vet, tamanho);
    imprime_vetor(vet, tamanho);
    

    return 0;
}

void preenche_vetor(int v[], int n){
    printf("Preencha o vetor com os %d termos: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
}

void imprime_vetor(int v[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

