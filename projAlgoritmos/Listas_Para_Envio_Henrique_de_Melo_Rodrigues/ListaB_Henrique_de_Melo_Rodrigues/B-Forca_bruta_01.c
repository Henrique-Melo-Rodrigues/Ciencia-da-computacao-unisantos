#include <stdio.h>

int maior_fb(int n, int vet[]);
void preenche_vetor(int vet[], int n);

int main(){
    int tamanhoVetor;
    printf("Tamanho do vetor: "); 
    if(scanf("%d", &tamanhoVetor) != 1) return -1;

    int vetor[tamanhoVetor];
    preenche_vetor(vetor, tamanhoVetor);
    printf("Maior: %d\n", maior_fb(tamanhoVetor, vetor));

    return 0;
}

void preenche_vetor(int vet[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

}

int maior_fb(int n, int vet[]){
    int maior = vet[0];
    for(int i = 1; i < n; i++){
        if (maior < vet[i]){
            maior = vet[i];
        }
    }

    return maior;
}