
#include <stdio.h>

int find_substr(char a[], char b[]) {
    for (int i = 0; a[i] != '\0'; i++) {
        int j = 0;
        while (a[i + j] == b[j] && b[j] != '\0')
            j++;
        if (b[j] == '\0')
            return 1;
    }
    return -1;
}

int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);
    printf("%d\n", find_substr(a, b));
    return 0;
}
