#include <stdio.h>

int fibnacci(int termo, int *num_call){
    
    
    if(termo > 1){
        (*num_call)+= 2;
        return fibnacci(termo - 1, num_call) + fibnacci(termo - 2, num_call);
    }

    if (termo < 0){
        return -1;
    }

    if(termo == 0){
        return 0;
    }

    return 1;


}

int main(){
    int quantCasos,termo;

    scanf("%d", &quantCasos);

    if (quantCasos >= 1  || quantCasos <= 39){

        for(int i = 0; i < quantCasos; i++){
    
            int num_calls = 0;
            scanf("%d", &termo);
            int resultado = fibnacci(termo, &num_calls);
            printf("fib(%d) = %d calls = %d\n", termo, num_calls, resultado);

        }
        
    }

    return 0;
}