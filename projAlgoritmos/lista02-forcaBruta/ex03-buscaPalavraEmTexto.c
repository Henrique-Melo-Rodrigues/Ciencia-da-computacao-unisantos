#include <stdio.h>
#include <string.h>

int buscar_palavra(char texto[], char palavra[]){
    int tamanhoTexto = strlen(texto);
    int tamanhoPalavra = strlen(palavra);

    for (int i = 0; i <= tamanhoTexto - tamanhoPalavra; i++){
        int j = 0;
        while (j < tamanhoPalavra && texto[i + j] == palavra[j]){
            j++;
        }
        if (j == tamanhoPalavra){
            return i;
        }
    }

    return -1;
}

int main(){
    char texto[] = "o professor apolinario eh zika";
    char palavra[] = "apolinario";

    int posicao = buscar_palavra(texto, palavra);

    if (posicao == -1){
        printf("Palavra \"%s\" nao encontrada no texto...\n", palavra);
    } else {
        printf("Achei a palavra \"%s\" na posicao %d do texto\n", palavra, posicao);
    }

    return 0;
}
