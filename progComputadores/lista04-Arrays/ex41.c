#include <stdio.h>

int main()
{
    long long fibonacci[61];
    int i, positionTermoUser,  quantidadeTermosUser,termoUser;

    for(i = 0; i < 61; i++){
        if (i == 0){
            fibonacci[i] = 0;
        }
        else if(i == 1){
            fibonacci[i] = 1;
        }
        else{
            fibonacci[i] = (fibonacci[i - 1] + fibonacci [i - 2]);
        }           
    }
    
    scanf("%d", &quantidadeTermosUser);
    for(i = 0; i < quantidadeTermosUser; i++){
        scanf("%d", &termoUser);
        if(termoUser >= 0 && termoUser <=60){
            printf("Fib(%d) = %lld\n", termoUser, fibonacci[termoUser]);
        }
    }
    return 0;   
}
