#include <stdio.h>

int main()
{
    int valores, i, pares[5], impares[5], contadorPar, contadorImpar;
    for(i = 0; i < 15; i++){
        scanf("%d", &valores);
        if(valores % 2 == 0){
            pares[i] = valores;
            contadorPar++;
        }
        else{
            impares[i] = valores;
            contadorImpar++;
        }
           if(contadorPar == 5){
            for(i = 0; i < 5; i++){
                printf("Par[%d] = %d", i, pares[i]);
            }
        }
        if(contadorImpar == 5){
            for(i = 0; i < 5; i++){
                printf("Impar[%d] = %d", i, impares[i]);
                impares[5];
            }
        }
     
    }
}