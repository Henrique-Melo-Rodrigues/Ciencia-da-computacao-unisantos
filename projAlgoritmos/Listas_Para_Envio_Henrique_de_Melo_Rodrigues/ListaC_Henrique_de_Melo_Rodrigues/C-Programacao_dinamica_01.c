#include <stdio.h>

typedef long long lld;
lld tabela[1000];

lld fib_bottomup(int n);

int main() {
    int x;
    printf("Inserir termo do fibonacci: ");
    if (scanf("%d", &x) != 1 || x < 0) return 0;

    lld fib = fib_bottomup(x);
    printf("Fib(%d) = %lld\n", x, fib);

    return 0;
}

lld fib_bottomup(int n) {
    if (n == 0) return 0;

    tabela[0] = 0;
    tabela[1] = 1;

    for (int i = 2; i <= n; i++) {
        tabela[i] = tabela[i - 1] + tabela[i - 2];
    }

    return tabela[n];
}
