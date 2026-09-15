#include <stdio.h>

void linha(void);

int main(){
    linha();
    printf("\t Um programa em C\n");
    linha();

    return 0;
}

void linha(void){
    for(int i = 0; i < 80; i++){
        putchar('-');
    }
    
    putchar('\n');
}
