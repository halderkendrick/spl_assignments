#include <stdio.h>

int str_length(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int find_substr(char a[], char b[]) {
    int la = str_length(a);
    int lb = str_length(b);

    for (int i = 0; i <= la - lb; i++) {
        int j = 0;
        while (a[i + j] == b[j] && j < lb)
            j++;
        if (j == lb)
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
