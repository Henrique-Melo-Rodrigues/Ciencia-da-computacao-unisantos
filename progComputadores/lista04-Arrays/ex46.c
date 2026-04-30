#include <stdio.h>

int main()
{
    int i, n, menor, posicao;
    scanf("%d", &n);
    int x[n];
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
        if(i == 1){
            menor = x[i];
            posicao = i;
        }
        else{
            if(x[i] < menor){
                menor = x[i];
                posicao = i;
           }
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}