#include <stdio.h>

int main()
{
    int num, i, j, par[5], impar[5], contadorPar = 0, contadorImpar = 0;
    for(i = 0; i < 15; i++){
        scanf("%d", &num);
        if(num % 2 == 0){
            par[contadorPar] = num;
            contadorPar++;
            if(contadorPar > 4){
                for(j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                contadorPar = 0;
            }
        }

        else{
            impar[contadorImpar] = num;
            contadorImpar++;
            if(contadorImpar > 4){
                for(j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                contadorImpar = 0;
            }

        }

    }

    for(i = 0; i < contadorImpar; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for(i = 0; i < contadorPar; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}