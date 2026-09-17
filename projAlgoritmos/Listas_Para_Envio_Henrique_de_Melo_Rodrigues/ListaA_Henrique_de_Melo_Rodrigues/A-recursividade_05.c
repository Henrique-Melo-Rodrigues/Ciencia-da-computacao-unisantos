#include <stdio.h>

/*
Busquei entender esse exercicio acessando o video do link abaixo:
https://www.youtube.com/watch?v=Ug6hIyn3txE 
*/


void hanoi(int n, char origem, char destino, char auxiliar);

int main(){
    int numeroDiscos;

    printf("Quantidade de discos para a torre de hanoi: ");
    scanf("%d", &numeroDiscos);
    

    hanoi(numeroDiscos, 'A', 'C', 'B');

    return 0;
}


void hanoi(int n, char origem, char destino, char auxiliar){
    if (n <= 0){
        return;
    }
    
    hanoi(n-1, origem, auxiliar, destino);

    printf("Saida: %c -> %c / ", origem, destino);

    hanoi(n-1, auxiliar, destino, origem);
    

    return;
}
