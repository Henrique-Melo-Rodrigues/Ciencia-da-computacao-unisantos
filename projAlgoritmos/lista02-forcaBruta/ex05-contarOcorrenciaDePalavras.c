#include <stdio.h>
#include <string.h>

int contar_ocorrencias(char texto[], char palavra[]);

int main(){
    char texto[] = "o gato virou um rato, o gato virou um rato  ";
    char palavra[] = "rato";

    int ocorrencias = contar_ocorrencias(texto, palavra);

    printf("A palavra \"%s\" aparece %d vez(es) no texto\n", palavra, ocorrencias);

    return 0;
}

int contar_ocorrencias(char texto[], char palavra[]){
    int tam_texto = strlen(texto);
    int tam_palavra = strlen(palavra);
    int ocorrencias = 0;

    for (int i = 0; i <= tam_texto - tam_palavra; i++){
        int j = 0;
        while (j < tam_palavra && texto[i + j] == palavra[j]){
            j++;
        }
        if (j == tam_palavra){
            ocorrencias++;
        }
    }

    return ocorrencias;
}
