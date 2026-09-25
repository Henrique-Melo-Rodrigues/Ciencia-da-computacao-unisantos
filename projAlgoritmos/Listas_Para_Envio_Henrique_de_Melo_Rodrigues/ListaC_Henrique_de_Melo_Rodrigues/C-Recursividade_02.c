#include <stdio.h>

int pot(int x, int y);

int main() {
    int x, y;
    printf("Digite a base x e o expoente y: ");
    if (scanf("%d %d", &x, &y) != 2 || y < 0) return 0;

    printf("Resultado: %d\n", pot(x, y));

    return 0;
}

int pot(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * pot(x, y - 1);
}
