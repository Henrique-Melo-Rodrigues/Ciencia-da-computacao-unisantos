#include <stdio.h>

int main()
{   
    int i, termo, limite = 0,num[1000];
    scanf("%d", &termo);
    if(termo >= 2 && termo <= 50){
        for (i = 0; i < 1000; i++){
          num[i] = limite;
          limite++;
          if(limite == termo){
            limite = 0;
          }
          
        }
        for (i = 0; i < 1000; i++){
            printf("N[%d] = %d\n", i, num[i]);
        }
    }

    return 0;
}