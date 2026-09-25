#include <stdio.h>
#include <string.h>

typedef long long lld;
lld tabela[1000];

lld fib_topdown(int n);

int main() {
    memset(tabela, -1, sizeof(tabela));
    int x;
    printf("Inserir termo do fibonacci: ");
    if (scanf("%d", &x) != 1 || x < 0) return 0;

    lld fib = fib_topdown(x);
    printf("Fib(%d) = %lld\n", x, fib);

    return 0;
}

lld fib_topdown(int n) {
    if (n <= 1) return n;

    if (tabela[n] != -1) return tabela[n];

    tabela[n] = fib_topdown(n - 1) + fib_topdown(n - 2);
    return tabela[n];
}
