#include <stdio.h>
#define len(v) (sizeof(v)) / (sizeof(v[0]))

int menorDc(int vet[], int inicio, int fim){
    if (inicio == fim){
        return vet[inicio];
    }

    int meio = inicio + (fim - inicio) / 2;

    int menorInicio = menorDc(vet, inicio, meio);
    int menorFim = menorDc(vet, meio + 1, fim);

    return (menorInicio < menorFim ? menorInicio : menorFim);
}

int main(){
    int vetor[] = {4, 5, 123, 41, 5, 1, 5, 6, 0, -5, 41, 4, 5 , 7 , 7, 67};
    int fim = len(vetor);
    int inicio = 0;

    int menor = menorDc(vetor, inicio, fim - 1);

    printf("O menor dessa bagaca eh %d\n", menor);

    return 0;
}
