// 사칙 연산

#include <stdio.h>

int main() {
    char op;
    int a, b;
    scanf("%c\n", &op);
    scanf("%d %d", &a, &b);
    if (op == '+') {
        printf("%d + %d = %d", a, b, a + b);
    }
    else if (op == '-') {
        printf("%d - %d = %d", a, b, a - b);
    }
    else if (op == '*') {
        printf("%d * %d = %d", a, b, a * b);
    }
    else if (op == '/') {
        printf("%d = %d * %d + %d", a, b, a / b, a % b);
    }
}