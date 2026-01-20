#include <stdio.h>

void multiplyBy2(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i] * 2);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    multiplyBy2(a, n);
    return 0;
}
