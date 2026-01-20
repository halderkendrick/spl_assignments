#include <stdio.h>

void show(int m[3][5]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

void scalarMultiply(int m[3][5], int k) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", m[i][j] * k);
        printf("\n");
    }
}

int main() {
    int m[3][5], k;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &m[i][j]);

    scanf("%d", &k);

    printf("Original:\n");
    show(m);

    printf("Multiplied by %d:\n", k);
    scalarMultiply(m, k);

    return 0;
}
