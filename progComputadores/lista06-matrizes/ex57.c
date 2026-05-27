#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 100
#define MAX_TAM 21

void lerIdiomas(char idiomas[MAX_PESSOAS][MAX_TAM], int k) {
    for (int i = 0; i < k; i++)
        scanf("%s", idiomas[i]);
}

int todosIguais(char idiomas[MAX_PESSOAS][MAX_TAM], int k) {
    for (int i = 1; i < k; i++)
        if (strcmp(idiomas[0], idiomas[i]) != 0)
            return 0;
    return 1;
}

int main() {
    int n, k;
    char idiomas[MAX_PESSOAS][MAX_TAM];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        lerIdiomas(idiomas, k);
        if (todosIguais(idiomas, k))
            printf("%s\n", idiomas[0]);
        else
            printf("ingles\n");
    }

    return 0;
}
