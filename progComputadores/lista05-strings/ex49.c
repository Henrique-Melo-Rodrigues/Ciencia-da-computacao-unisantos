#include <stdio.h>

#define QTD_NUMEROS 3

int transformarNumero(const char *inicio, int qtdDigitos)
{
    int numero = 0;

    for (int i = 0; i < qtdDigitos; i++) {
        numero = numero * 10 + (*(inicio + i) - '0');
    }

    return numero;
}

int somarNumerosDaLinha(const char *texto, int *numeros)
{
    int posicoesIniciais[QTD_NUMEROS] = {2, 5, 11};
    int qtdDigitos[QTD_NUMEROS] = {2, 3, 2};
    int soma = 0;

    int *ptrPosicao = posicoesIniciais;
    int *ptrQtdDigitos = qtdDigitos;
    int *ptrNumero = numeros;

    for (int i = 0; i < QTD_NUMEROS; i++) {
        *ptrNumero = transformarNumero(texto + *ptrPosicao, *ptrQtdDigitos);
        soma += *ptrNumero;

        ptrPosicao++;
        ptrQtdDigitos++;
        ptrNumero++;
    }

    return soma;
}

int main()
{
    int numeroDeLinhas;
    scanf("%d", &numeroDeLinhas);
    if(numeroDeLinhas > 10000){
        return 0; //finaliza programa se o user quiser mais de 1000 linhas
    } 
    char caracterPorLinha[15];

    for(int i = 0; i < numeroDeLinhas; i++){
        int valor[QTD_NUMEROS];
        int soma;
        scanf("%14s", caracterPorLinha);

        soma = somarNumerosDaLinha(caracterPorLinha, valor);
        printf("%d\n", soma);
    }
        
    return 0;
}
