#include <stdio.h>

#define TAMANHO_MAXIMO 101
#define QTD_CARACTERES 10

void removerQuebraDeLinha(char *frase)
{
    char *ptrFrase = frase;

    while (*ptrFrase != '\0') {
        if (*ptrFrase == '\n') {
            *ptrFrase = '\0';
            break;
        }

        ptrFrase++;
    }
}

void imprimirFrases(char *primeira, char *segunda, char *terceira)
{
    printf("%s%s%s\n", primeira, segunda, terceira);
}

void imprimirAteDezCaracteres(char *frase)
{
    char *ptrFrase = frase;
    int contador = 0;

    while (*ptrFrase != '\0' && contador < QTD_CARACTERES) {
        printf("%c", *ptrFrase);
        ptrFrase++;
        contador++;
    }
}

int main()
{
    char fraseA[TAMANHO_MAXIMO];
    char fraseB[TAMANHO_MAXIMO];
    char fraseC[TAMANHO_MAXIMO];

    fgets(fraseA, TAMANHO_MAXIMO, stdin);
    fgets(fraseB, TAMANHO_MAXIMO, stdin);
    fgets(fraseC, TAMANHO_MAXIMO, stdin);

    removerQuebraDeLinha(fraseA);
    removerQuebraDeLinha(fraseB);
    removerQuebraDeLinha(fraseC);

    imprimirFrases(fraseA, fraseB, fraseC);
    imprimirFrases(fraseB, fraseC, fraseA);
    imprimirFrases(fraseC, fraseA, fraseB);

    imprimirAteDezCaracteres(fraseA);
    imprimirAteDezCaracteres(fraseB);
    imprimirAteDezCaracteres(fraseC);
    printf("\n");

    return 0;
}
