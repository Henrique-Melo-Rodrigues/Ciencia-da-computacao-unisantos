#include <stdio.h>

void dobro(int);       


int main(){
    int valor;
    printf("Inserir os valor de n: ");
    scanf("%d", &valor);
    /*
        A variavel "int valor" no main, nao foi alterado apos a funcao, pois ela foi copiada dentro
        da funcao dobro e esta copia teve o valor n * 2 atribuido a ela. O valor no Main nao foi 
        alterado.
    */
    dobro(valor);

    return 0;
}
void dobro(int n){
    
    int dobroValor = n * 2;
    printf("Dobro: %d / Numero original: %d\n", dobroValor, n); 

}
