#include <stdio.h>
#define MAX 50

int conta (int *vetor, int *tamanhoVetor, int *busca);

void preencheVetor(int *vetor, int *tamanhoVetor);

int main(){
  int array[MAX], tamanhoArray, contBusca;
  preencheVetor(array, &tamanhoArray);
  printf("Ocorrencias: %d\n", conta(array, &tamanhoArray, &contBusca));  
  return 0;
}


void preencheVetor(int *vetor, int *tamanhoVetor){
  printf("Tamanho do vetor: ");
  scanf("%d", tamanhoVetor);
  printf("Insira o(s) %d valores do vetor: ", *tamanhoVetor);

  for(int i = 0; i < *tamanhoVetor; i++){
    scanf("%d", &vetor[i]);
  }

}

int conta(int *vetor, int *tamanhoVetor,int *busca){
  printf("Inserir numero que deseja ver a quantidade de ocorrencias dentro do vetor: ");
  scanf("%d", busca);
  
  int quantOcorrencias = 0;

  for (int i = 0; i < *tamanhoVetor; i++){
    if (vetor[i] == *busca) quantOcorrencias++;
  }
  
  return quantOcorrencias;
}

