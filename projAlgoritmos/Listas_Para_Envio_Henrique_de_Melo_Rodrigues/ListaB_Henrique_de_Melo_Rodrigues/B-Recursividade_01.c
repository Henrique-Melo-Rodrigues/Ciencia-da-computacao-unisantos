#include <stdio.h>

long long fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n - 2) + fib(n - 1); 

}

int main(){
    int termo;
    printf("Inserir termo do fibonnaci: ");
    scanf("%d", &termo);
    long long fibonnaci = fib(termo);

    printf("Fib(%d) = %lld\n", termo, fibonnaci);

    

    return 0;
}