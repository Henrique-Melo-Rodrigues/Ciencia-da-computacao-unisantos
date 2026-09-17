#include <stdio.h>

int potencia(int , int );

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int pot = potencia(a, b);
    printf("Resultado: %d\n", pot);
    
    return 0;
}

int potencia(int x, int y ){
    
    if (y == 0) return 1;
    if (x == 0) return 0;

    return x * potencia(x , y -  1);

} 