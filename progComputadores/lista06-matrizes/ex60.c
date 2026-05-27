#include <stdio.h>
#include <string.h>

#define MAX_CASOS 100
#define MAX_TAM 1001

void extrairCriptotexto(char *entrada, char *saida) {
    int n = strlen(entrada);
    int k = 0;
    for (int i = n - 1; i >= 0; i--)
        if (entrada[i] >= 'a' && entrada[i] <= 'z')
            saida[k++] = entrada[i];
    saida[k] = '\0';
}

int main() {
    int c;
    char mensagens[MAX_CASOS][MAX_TAM];
    char resultado[MAX_TAM];

    scanf("%d", &c);
    for (int i = 0; i < c; i++)
        scanf("%s", mensagens[i]);

    for (int i = 0; i < c; i++) {
        extrairCriptotexto(mensagens[i], resultado);
        printf("%s\n", resultado);
    }

    return 0;
}
