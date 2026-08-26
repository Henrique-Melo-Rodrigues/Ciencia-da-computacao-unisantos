#include <stdio.h>

int quebrar_senha(int senha_correta){
    for (int i = 0; i <= 9999; i++){
        if (i == senha_correta){
            return i;
        }
    }

    return -1;
}

int main(){
    int resultado = quebrar_senha(10);
    if (resultado == -1){
        printf("Senha nao encontrada...\n");
    } else {
        printf("achei na posicao %04d\n", resultado);
    }
    return 0;
}