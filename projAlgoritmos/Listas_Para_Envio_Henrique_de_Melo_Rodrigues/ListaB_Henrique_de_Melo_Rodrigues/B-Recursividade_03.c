#include <stdio.h>

int mdc(int a, int b){
    if (b == 0) return a;

    return mdc(b, a % b);

}
int main(){
    int x, y;
    printf("Insira dois termos inteiros positivos: ");
    scanf("%d %d", &x, &y);

    int menorDivisorComum = mdc(x, y);
    printf("MDC: %d\n", menorDivisorComum);



    return 0;
}