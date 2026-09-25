#include <stdio.h>

int absoluto(int x);

int main() {
    int x;
    printf("Digite um inteiro: ");
    if (scanf("%d", &x) != 1) return 0;

    printf("Absoluto: %d\n", absoluto(x));

    return 0;
}

int absoluto(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}
