#include <stdio.h>

int main()
{    
    int quantidadeDeAtaques;
    char ataque[201];
    scanf("%d", &quantidadeDeAtaques);

    while (quantidadeDeAtaques--)
    {
        scanf("%200s", ataque);

        char *ptrAtaque = ataque;
        int qntdA1 = 0;  //qntd1 -> a antes de M; 
        int qntdA2 = 0; //qntd 2 -> a apos o m;

        while(*ptrAtaque != 'm')    
        {
            if(*ptrAtaque == 'a'){
                qntdA1++;
            }
            ptrAtaque++;

        }
        while (*ptrAtaque != 'k')
        {
           ptrAtaque++;
        }
        
        while(*ptrAtaque != 'm')
        {
            if(*ptrAtaque == 'a'){
                    qntdA2++;
            }
            ptrAtaque++;

        }
        printf("k");
    
        for(int i = 0; i < qntdA1 * qntdA2; i++)
        {
            printf("a");
        }    

        printf("\n");
    
    }
    return 0;
}