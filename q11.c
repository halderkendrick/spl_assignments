
#include <stdio.h>

int str_length(char s[]) {
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

int main() {
    char s[100];
    gets(s);
    printf("%d\n", str_length(s));
    return 0;
}
