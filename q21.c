#include <stdio.h>
#include <math.h>

float mean(int a[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    return sum / n;
}

float stdDeviation(int a[], int n) {
    float m = mean(a, n), sum = 0;
    for (int i = 0; i < n; i++)
        sum += (a[i] - m) * (a[i] - m);
    return sqrt(sum / n);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%.2f\n", stdDeviation(a, n));
    return 0;
}
