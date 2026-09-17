#include <stdio.h>
#include <stdlib.h>

void estatisticas(float vet[], int n, float *media, float *maior);

int main(int argc, char **argv){
    if (argc < 2) {
        return -1;
    }

    int n = atoi(argv[1]);

    if (argc < n + 2) {
        return 1;
    }

    float vet[n];
    for (int i = 0; i < n; i++) {
        vet[i] = atof(argv[i + 2]);
    }

    float media, maior;
    estatisticas(vet, n, &media, &maior);

    printf("Media: %.1f\n", media);
    printf("Maior: %.1f\n", maior);

    return 0;
} 


void estatisticas(float vet[], int n, float *media, float *maior){
    float soma = 0.0;
    *maior = vet[0];

    for (int i = 0; i < n; i++) {
        if (vet[i] > *maior) {
            *maior = vet[i];
        }
        soma += vet[i];
    }

    *media = soma / n;
}
