#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int nthPrime(int n) {
    int count = 0, i = 2;
    while (1) {
        if (isPrime(i)) count++;
        if (count == n) return i;
        i++;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%dth Prime: %d\n", n, nthPrime(n));
    return 0;
}
