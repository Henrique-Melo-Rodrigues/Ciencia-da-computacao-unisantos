#include <stdio.h>
#define MAX 50

int busca_sequencial(int vet[], int , int );

void preenche_vetor(int vet[], int *);
   

int main(){
  int tamanhoArray, busca;
  int array[MAX]; 
  preenche_vetor(array, &tamanhoArray);
  printf("Qual valor deseja encontrar no array: ");
  scanf("%d", &busca);
  int result = busca_sequencial(array, tamanhoArray, busca);  
  printf("Saida: %d\n", result);
}
void preenche_vetor(int vet[], int *tamanhoArray){
    printf("Tamanho do vetor: ");
    scanf("%d", tamanhoArray);
    printf("Insira os valores do vetor: ");

    for (int i = 0; i < *tamanhoArray; i++){
        scanf("%d", &vet[i]);
    }

}

int busca_sequencial(int vet[], int n, int x){
    for(int i = 0; i <  n; i++){
      if (vet[i] == x) return i;
  }   
    return -1;

}
