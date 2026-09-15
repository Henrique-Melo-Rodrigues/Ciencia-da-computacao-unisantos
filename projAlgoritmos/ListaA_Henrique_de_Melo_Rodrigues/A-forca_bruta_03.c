#include <stdio.h>
#include <stdlib.h>

void selecao_direta(int n, int *a);
void printaVetor(int tamanhoVetor, int *vetor);
int *preenche_vetor(int *tamanhoVetor);

int main(){
  int tamanhoVetor;
  int *vetor =  preenche_vetor(&tamanhoVetor);

  selecao_direta(tamanhoVetor, vetor);

  free(vetor);

  return 0;

}

int *preenche_vetor(int *tamanhoVetor){
  printf("Tamanho do vetor: ");
  scanf("%d", tamanhoVetor);

  int *vetor = (int *)malloc((*tamanhoVetor) * sizeof(int));

  printf("Preencha o vetor de %d termos: ", *tamanhoVetor);
  for(int i = 0; i < *tamanhoVetor; i++){
    scanf("%d", &vetor[i]); 
  }

  return vetor;
}




void printaVetor(int tamanhoVetor, int *vetor){
  for (int i = 0; i < tamanhoVetor; i++){
    printf("%d\t", vetor[i]);
  }
  printf("\n");
}

void selecao_direta(int tamanhoVetor, int *vetor){
  int i, j, k, menor;

  for(i = 0; i < tamanhoVetor - 1; i++){
    k = i;
    for(j = i + 1; j < tamanhoVetor; j++){
      if(vetor[j] < vetor[k]){
        k = j;
      }
    }
  
    menor = vetor[k];
    vetor[k] = vetor[i];
    vetor[i] = menor;
    printf("%d° ajuste: ", i + 1) ;
    printaVetor(tamanhoVetor, vetor);
  }
}