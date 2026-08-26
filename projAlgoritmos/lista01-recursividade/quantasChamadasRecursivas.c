#include <stdio.h>

typedef unsigned long long ull;

void fib(ull n, ull m, ull *fn, ull *fn1) {
    if (n == 0) {
        *fn  = 0 % m;
        *fn1 = 1 % m;
        return;
    }

    ull a, b;
    fib(n / 2, m, &a, &b);

    ull c = (a * ((2 * b % m + m - a) % m)) % m; 
    ull d = (a * a % m + b * b % m) % m;          

    if (n % 2 == 0) {
        *fn  = c;
        *fn1 = d;
    } else {
        *fn  = d;
        *fn1 = (c + d) % m;
    }
}

int main() {
    ull n;
    int b;
    int caso = 1;

    while (scanf("%llu %d", &n, &b) == 2) {
        if (n == 0 && b == 0) break;

        ull fn, fn1;
        fib(n, (ull)b, &fn, &fn1); 

        long long resultado = (2 * (long long)fn1 - 1) % b;
        if (resultado < 0) resultado += b;

        printf("Case %d: %llu %d %lld\n", caso, n, b, resultado);
        caso++;
    }

    return 0;
}