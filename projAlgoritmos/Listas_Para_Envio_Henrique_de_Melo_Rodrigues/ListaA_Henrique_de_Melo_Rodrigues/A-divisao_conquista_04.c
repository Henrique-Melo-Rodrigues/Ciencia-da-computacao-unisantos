#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int a[], int n);
void intercala(int a[], int p, int q, int r);
void mergesort(int a[], int p, int r);

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int *a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n == 1) {
        imprime_vetor(a, n);
    } else {
        int p = 0;
        int r = n - 1;
        int q = (p + r) / 2;

        mergesort(a, p, q);
        mergesort(a, q + 1, r);

        imprime_vetor(a, n);

        intercala(a, p, q, r);

        imprime_vetor(a, n);
    }

    free(a);
    return 0;
}

void imprime_vetor(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}
void intercala(int a[], int p, int q, int r) {
    int tamanho = r - p + 1;
    
    int *aux = (int *)malloc(tamanho * sizeof(int));
    if (aux == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    int i = p;     
    int j = q + 1;  
    int k = 0;      

    while (i <= q && j <= r) {
        if (a[i] <= a[j]) {
            aux[k] = a[i];
            i++;
        } else {
            aux[k] = a[j];
            j++;
        }
        k++;
    }

   
    while (i <= q) {
        aux[k] = a[i];
        i++;
        k++;
    }

    
    while (j <= r) {
        aux[k] = a[j];
        j++;
        k++;
    }

    for (k = 0; k < tamanho; k++) {
        a[p + k] = aux[k];
    }

    free(aux);
}

void mergesort(int a[], int p,int r) {
     if (p < r) {
        int q = (p + r) / 2;
        mergesort(a, p, q);      
        mergesort(a, q + 1, r);  
        intercala(a, p, q, r);    
    }
}