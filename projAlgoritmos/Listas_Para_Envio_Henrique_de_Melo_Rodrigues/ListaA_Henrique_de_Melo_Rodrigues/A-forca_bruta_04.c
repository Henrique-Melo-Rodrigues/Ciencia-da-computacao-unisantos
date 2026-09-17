#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 1000

bool string_match(const char *s1, const char *s2);

int main() {
    char s1[MAX];
    char s2[MAX];

    if (scanf("%s %s", s1, s2) == 2) {
        if (string_match(s1, s2)) {
            printf("Encontrada\n");
        } else {
            printf("Nao encontrada\n");
        }
    }

    return 0;
}

bool string_match(const char *s1, const char *s2) {
    int i, j, n, m;

    n = strlen(s1);
    m = strlen(s2);

    if (m > n) {
        return false;
    }

    for (i = 0; i <= n - m; i++) {
        for (j = 0; j < m; j++) {
            if (s1[i + j] != s2[j]) {
                break;
            }
        }
        if (j == m) {
            return true;
        }
    }

    return false;
}