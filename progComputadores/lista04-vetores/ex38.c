#include <stdio.h>

int main()
{
    int v, n[10];
    scanf("%d", &v);

    if (v <= 50){
        for(int i = 1; i <= 10; i++){
            n[0] = v;
            n[i] = n[i-1] * 2;        
        }
        for(int i = 0; i < 10; i++){
            printf("N[%d] = %d\n", i, n[i]);
        }     
    
    }
    return 0;
}