#include <stdio.h>
#include <string.h>

#define MAX 82

void lerMatring(char m[4][MAX]) {
    for (int i = 0; i < 4; i++)
        scanf("%s", m[i]);
}

int valorColuna(char m[4][MAX], int j) {
    return (m[0][j] - '0') * 1000
         + (m[1][j] - '0') * 100
         + (m[2][j] - '0') * 10
         + (m[3][j] - '0');
}

int main() {
    char matring[4][MAX];

    while (scanf("%s", matring[0]) == 1) {
        for (int i = 1; i < 4; i++)
            scanf("%s", matring[i]);

        int cols = strlen(matring[0]);
        int f = valorColuna(matring, 0);
        int l = valorColuna(matring, cols - 1);

        for (int j = 1; j < cols - 1; j++) {
            int mi = valorColuna(matring, j);
            printf("%c", (f * mi + l) % 257);
        }
        printf("\n");
    }

    return 0;
}
