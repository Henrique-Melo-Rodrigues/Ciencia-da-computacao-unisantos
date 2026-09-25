#include <stdio.h>

int busca_char(const char *s, char c);

int main() {
    char s[100];
    char c;
    printf("Digite uma string e um caractere: ");
    if (scanf("%99s %c", s, &c) != 2) return 0;

    int indice = busca_char(s, c);
    printf("%d\n", indice);

    return 0;
}

int busca_char(const char *s, char c) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}
