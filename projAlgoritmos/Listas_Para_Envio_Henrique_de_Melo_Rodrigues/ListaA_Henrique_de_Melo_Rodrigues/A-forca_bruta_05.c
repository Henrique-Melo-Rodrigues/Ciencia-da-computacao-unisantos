#include <stdio.h>
#include <stdlib.h>



int mochila_rec(int *p,int *v, int c, int n, int item);
int *preenche_vetor(int tamanhoVetor);

/*
[Difícil] Mochila booleana (recursiva). Escreva int mochila_rec(int p[],
int v[], int c, int n, int item) que devolve o maior valor que cabe na mo-
chila de capacidade c. Regra: se item >= n ou c == 0, devolva 0; se p[item]
> c, obrigatoriamente pule o item (mochila_rec(p, v, c, n, item+1)); se-
não devolva o máximo entre v[item] + mochila_rec(p, v, c - p[item], n,
item+1) (coloca) e mochila_rec(p, v, c, n, item+1) (não coloca). A primeira
chamada é mochila_rec(p, v, c, n, 0).
Entrada: capacidade c; n; os n pesos; os n valores (nesta ordem).
Saída: a linha Valor maximo: X.
Casos de teste:
Entrada: 50 / 5 / 40 30 20 10 20 / 840 600 400 100 300
Saida: Valor maximo: 1000 (itens 2 e 3)
Entrada: 10 / 3 / 6 5 4 / 12 10 8
Saida: Valor maximo: 18 (itens 2 e 3, peso 9)
Entrada: 5 / 2 / 10 20 / 3 5
Saida: Valor maximo: 0 (nada cabe)
Entrada: 7 / 1 / 7 / 20
Saida: Valor maximo: 20

*/

int main(){
    int capacidade, numeroProdutos;

    printf("Capacidade e numero de produtos que a mochila pode armazenar: ");
    scanf("%d", &capacidade);
    scanf("%d", &numeroProdutos);

    int *peso = preenche_vetor(numeroProdutos);
    int *valor = preenche_vetor(numeroProdutos);

    int maximo = mochila_rec(peso, valor, capacidade, numeroProdutos, 0);
    printf("Valor maximo: %d\n", maximo);    
    
    free(peso);
    free(valor);
    return 0;

}

int mochila_rec(int p[],int v[], int c, int n, int item){
    if(item >= n || c == 0) return 0;

    if (p[item] > c){
        return (mochila_rec(p, v, c, n,item+1));
    }
    else{
        
        int coloca = v[item] + mochila_rec(p, v, c - p[item], n, item + 1);
        int nao_coloca = mochila_rec(p, v, c, n, item + 1);

        return (coloca > nao_coloca) ? coloca : nao_coloca;
    }
    
}

int *preenche_vetor(int tamanhoVetor){


    int *vetor = (int *)malloc((tamanhoVetor) * sizeof(int));
    printf("Inserir os %d do vetor: ", tamanhoVetor);
    
    for (int i = 0; i < tamanhoVetor; i++){
        scanf("%d", &vetor[i]);
    }

    return vetor;
}