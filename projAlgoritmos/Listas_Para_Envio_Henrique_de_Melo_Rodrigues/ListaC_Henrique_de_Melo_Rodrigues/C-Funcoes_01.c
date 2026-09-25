#include <stdio.h>
#include <string.h>

void cabecalho(const char *titulo);

int main() {
    char titulo[51];
    printf("Digite o titulo (sem espacos): ");
    if (scanf("%50s", titulo) != 1) return 0;

    cabecalho(titulo);

    return 0;
}

void cabecalho(const char *titulo) {
    int n = strlen(titulo) + 4;
    for (int i = 0; i < n; i++) {
        putchar('=');
    }
    putchar('\n');

    printf("  %s  \n", titulo);

    for (int i = 0; i < n; i++) {
        putchar('=');
    }
    putchar('\n');
}
