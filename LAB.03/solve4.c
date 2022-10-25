#include <stdio.h>

int main() {
    char x;
    scanf("%c\n", &x);
    int a, b;
    scanf("%d %d", &a, &b);
    if (x == '+') {
        printf("%d + %d = %d", a, b, a + b);
    }
    else if (x == '-') {
        printf("%d - %d = %d", a, b, a - b);
    }
    else if (x == '*') {
        printf("%d * %d = %d", a, b, a * b);
    }
    else if (x == '/') {
        printf("%d = %d * %d + %d", a, b, a / b, a % b);
    }
}