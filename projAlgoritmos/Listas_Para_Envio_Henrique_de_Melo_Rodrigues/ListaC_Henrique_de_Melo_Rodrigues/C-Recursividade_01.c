#include <stdio.h>

long long fat(int n);

int main() {
    int n;
    printf("Digite n: ");
    if (scanf("%d", &n) != 1 || n < 0) return 0;

    printf("Fatorial: %lld\n", fat(n));

    return 0;
}

long long fat(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fat(n - 1);
}
