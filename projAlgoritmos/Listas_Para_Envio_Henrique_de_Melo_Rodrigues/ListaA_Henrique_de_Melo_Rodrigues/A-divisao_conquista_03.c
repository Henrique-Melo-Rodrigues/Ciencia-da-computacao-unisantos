#include <stdio.h>

int menor_dc(int vet[], int inicio, int fim){
    if(inicio == fim){
        return vet[inicio];

    }
    int meio = (inicio + fim) / 2;
    

    int metadeEsquerda = menor_dc(vet, inicio, meio);
    int metadeDireita = menor_dc(vet, meio + 1, fim);

    return (metadeDireita < metadeEsquerda) ? metadeDireita : metadeEsquerda;

}

void preencheVetor(int vetor[], int tamanho){
    printf("Insira os %d termos no vetor: ", tamanho);
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

int main(){
    int tamanhoVetor;
    printf("Tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    preencheVetor(vetor, tamanhoVetor);
    
    int menorValor = menor_dc(vetor ,0, tamanhoVetor - 1);
    
    printf("Menor: %d\n", menorValor);

    return 0;
}
  