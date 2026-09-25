#include <stdio.h>

void fib_sequencia(int n);

int main() {
    int n;
    printf("Inserir termo do fibonacci: ");
    if (scanf("%d", &n) != 1 || n < 0) return 0;

    fib_sequencia(n);

    return 0;
}

void fib_sequencia(int n) {
    long long tabela[n + 2];
    tabela[0] = 0;
    tabela[1] = 1;

    for (int i = 2; i <= n; i++) {
        tabela[i] = tabela[i - 1] + tabela[i - 2];
    }

    for (int i = 0; i <= n; i++) {
        printf("%lld", tabela[i]);
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");
}
