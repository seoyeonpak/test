#include <stdio.h>

void reverse(char *str) {
    int i = 0, t;
    while (*(str + i) != '\0') {
        i++;
    }
    for (int j = 0; j < i / 2; j++) {
        t = *(str + j);
        *(str + j) = *(str + i - j - 1);
        *(str + i - j - 1) = t;
    }
}

int main() {
    char str[100];
    gets(str);
    reverse(str);
    puts(str);
}