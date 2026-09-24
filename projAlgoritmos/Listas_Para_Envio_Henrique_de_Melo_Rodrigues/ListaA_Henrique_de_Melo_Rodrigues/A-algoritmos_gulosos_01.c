#include <stdio.h>

typedef struct 
{
   int valor;
   int quantidade;
}Nota;


void troco(int );

int main(){
    int valorTotal;
    if(scanf("%d", &valorTotal) != 1 || valorTotal <= 0) return 0;

    troco(valorTotal);

    return 0;
}

void troco(int valor){
    Nota notas[] = 
    {
        {100, 0},
        {50, 0},
        {20, 0},
        {10, 0},
        {5, 0},
        {2, 0},
        {1, 0}
    };
    int totalNotas = sizeof(notas) / sizeof(notas[0]);

    for (int i = 0; i < totalNotas; i++){
        notas[i].quantidade = valor / notas[i].valor;
        valor = valor % notas[i].valor;
    }

    for (int i = 0; i < totalNotas; i++){
        if(notas[i].quantidade > 0){
            printf("%d nota(s) de R$%d /\t", notas[i].quantidade, notas[i].valor);
        }
    }
    printf("\n");
    
}