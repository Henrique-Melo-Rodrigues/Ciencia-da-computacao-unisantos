#include <stdio.h>

int mult(int a, int b){
    if(b == 1) return a;
    if (b >= 1){
        return a + mult(a, b-1);
    }
    return 0;
}

int main(){
    int x, y, produto;
    printf("Entre com os valores a serem multiplicados: ");
    scanf("%d %d", &x, &y);
    produto = mult(x, y);

    printf("Produto: %d\n", produto);

    return 0;
}