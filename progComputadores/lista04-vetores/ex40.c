#include <stdio.h>

int main()
{
    int i, numeros[20], numerosInvertidos[20];

    for (i = 0; i < 20; i++)  {
        scanf("%d", &numeros[i]);
    }  
    for (i = 0; i < 20; i++){
        numerosInvertidos[i] = numeros[19 - i];
        printf("N[%d] = %d\n", i,numerosInvertidos[i]);
    }
     
    return 0;
}
