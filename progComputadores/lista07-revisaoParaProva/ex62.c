#include <stdio.h>

void trocarPosicoes(int *pa, int *pb){
    int aux = *pa;
    *pa = *pb;
    *pb =  aux;
}
void lerArray(int *array, int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
}
void imprimeArray(int *array, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int n;
    int array[20];
    scanf("%d", &n);
    lerArray(array, n);
    for (int i = 0; i < 20 / 2; i++){
        trocarPosicoes(&array[i], &array[n - 1 - i]);
    }
    imprimeArray(array, n);
    return 0;
}