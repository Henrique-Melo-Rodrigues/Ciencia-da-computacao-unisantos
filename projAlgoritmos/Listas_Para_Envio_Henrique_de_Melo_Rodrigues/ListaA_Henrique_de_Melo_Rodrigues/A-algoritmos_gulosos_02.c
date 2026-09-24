#include <stdio.h>
#include <stdlib.h>

int max_arquivos(int , int *, int );
int comparar(const void *, const void *);
void preenche_vetor(int *, int);


int main(){
    int armazenamentoTotal, quantidade;
    printf("Inserir capacidade total e quantidade de itens a serem inseridos, ex(16 5): ");
    if (scanf("%d %d", &armazenamentoTotal, &quantidade) != 2 || armazenamentoTotal <= 0 || quantidade <= 0){
        return 0;
    }

    int valores[quantidade];

    printf("Preencha os %d valores que deseja inserir no seu pendrive: ", quantidade);
    preenche_vetor(valores, quantidade);


    int quantMaxima = max_arquivos(armazenamentoTotal, valores, quantidade);
    
    printf("Arquivos: %d\n", quantMaxima);
    return 0;
}

void preenche_vetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

int comparar(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int max_arquivos(int capacidade, int tamanhos[], int n){
    qsort(tamanhos, n, sizeof(int), comparar);

    int contador = 0;
    int espaco_utilzado = 0;
    int i = 0;

    if (n == 0) return 0;

    do{
        if(espaco_utilzado + tamanhos[i] <= capacidade){
            espaco_utilzado += tamanhos[i];
            contador++;
            i++;
        }else{
            break;
        }

    }while(i < n);

    return contador;
}