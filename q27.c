#include <stdio.h>

void convert(int n, int b) {
    char digits[] = "0123456789ABCDEF";
    char res[50];
    int i = 0;

    if (b < 2 || b > 16) {
        printf("Base not within proper range!\n");
        return;
    }

    while (n > 0) {
        res[i++] = digits[n % b];
        n /= b;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%c", res[j]);
    printf("\n");
}

int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    convert(n, b);
    return 0;
}
