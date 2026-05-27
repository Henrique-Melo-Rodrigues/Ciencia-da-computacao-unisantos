#include <stdio.h>

int ehVogal(char letra)
{
    char vogais[] = "aeiouAEIOU";
    char *ptrVogal = vogais;

    while (*ptrVogal != '\0') {
        if (letra == *ptrVogal) {
            return 1;
        }

        ptrVogal++;
    }

    return 0;
}

int ehDificil(char *sobrenome)
{
    int consoantesSeguidas = 0;
    char *ptrSobrenome = sobrenome;

    while (*ptrSobrenome != '\0') {
        if (ehVogal(*ptrSobrenome)) {
            consoantesSeguidas = 0;
        } else {
            consoantesSeguidas++;

            if (consoantesSeguidas >= 3) {
                return 1;
            }
        }

        ptrSobrenome++;
    }

    return 0;
}

int main()
{
    int quantidadeSobreNomes;
    char sobrenome[43];

    scanf("%d", &quantidadeSobreNomes);

    for (int i = 0; i < quantidadeSobreNomes; i++) {
        scanf("%42s", sobrenome);

        if (ehDificil(sobrenome)) {
            printf("%s nao eh facil\n", sobrenome);
        } else {
            printf("%s eh facil\n", sobrenome);
        }
    }

    return 0;
}
