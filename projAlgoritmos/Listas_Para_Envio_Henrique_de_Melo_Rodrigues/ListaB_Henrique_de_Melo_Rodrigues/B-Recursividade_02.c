#include <stdio.h>

int somavet(const int vet[], int n){
    if (n == 1) return vet[0];

    return vet[n-1] + somavet(vet, n - 1);
}

int main(){
    int n;
    printf("Insirir quantidade de termos do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    
    printf("Inserir os %d termos do vetor: ",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    int soma = somavet(vetor, n);

    printf("Soma: %d\n", soma);
    return 0;
}