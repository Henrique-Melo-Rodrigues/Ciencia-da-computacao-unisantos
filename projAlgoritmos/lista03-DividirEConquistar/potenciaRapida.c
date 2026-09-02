#include <stdio.h>
#include <math.h>

long long potencia_rapida(int x, int n);

int main(){
    int valor, potencia;
    printf("Insira o valor e a potencia dele: ");
    scanf("%d %d", &valor, &potencia);

    printf("%d elevado a %d eh igual a %lld\n", valor, potencia, potencia_rapida(valor, potencia));

    return 0;
}

long long potencia_rapida(int x, int n){
    if (n == 0){
        return 1;

    }

    long long metade;
    if(n % 2 == 0){
        metade = potencia_rapida(x, n / 2);

        return metade * metade;
    }

    else{
        metade = potencia_rapida(x, (n - 1) / 2);
        return x * metade * metade;
    }

}
