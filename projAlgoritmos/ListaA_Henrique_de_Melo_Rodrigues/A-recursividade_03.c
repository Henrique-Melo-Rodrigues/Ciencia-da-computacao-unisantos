#include <stdio.h>

int compr(const char *str);

int main(){

    char string[] = "HelloWorld";
    int tamanhoString = compr(string);
    printf("Comprimento: %d\n", tamanhoString); 

    return 0;
}

int compr(const char *str){
    if (*str == '\0') return 0;

    return 1 + compr(str + 1);

}