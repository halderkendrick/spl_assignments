#include <stdio.h>

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("Value in func: %d %d\n", a, b);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(x, y);
    printf("Value in main: %d %d\n", x, y);
    return 0;
}
