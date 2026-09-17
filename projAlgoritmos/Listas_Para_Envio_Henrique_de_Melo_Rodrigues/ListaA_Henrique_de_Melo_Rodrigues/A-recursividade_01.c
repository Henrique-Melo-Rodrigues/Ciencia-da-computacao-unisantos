#include <stdio.h>

long long fat(int);

int main(){
    int n = 5;
    long long fatorial = fat(n);
    
    printf("Fatorial de %d eh %lld\n", n, fatorial);


    return 0;
}

long long fat(int x){
    if (x <= 0 || x == 1){
        return 1;
    }
    return x * fat(x - 1);
}