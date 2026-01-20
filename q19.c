#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void generatePrime(int n) {
    for (int i = 2; i < n; i++)
        if (isPrime(i))
            printf("%d ", i);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Prime less than %d: ", n);
    generatePrime(n);
    return 0;
}
