#include <stdio.h>

void show(int r, int c, int m[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

void scalarMultiply(int r, int c, int m[r][c], int k) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", m[i][j] * k);
        printf("\n");
    }
}

int main() {
    int r, c, k;
    scanf("%d %d", &r, &c);

    int m[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &m[i][j]);

    scanf("%d", &k);

    printf("Original:\n");
    show(r, c, m);

    printf("Multiplied by %d:\n", k);
    scalarMultiply(r, c, m, k);

    return 0;
}
