#include <stdio.h>

int main() {
    /*char c = 65;
    char *p = &c;
    printf("%c %p\n", c, &c);
    printf("%p %c\n", p, *p);*/

    /*int a = 65;
    int *p = &a;
    printf("%d %p\n", a, &a);
    printf("%p %d\n", p, *p);*/

    /*int a = 0x65000000;
    char *p = (char *)&a;     // 강제 형 변환
    printf("%d %p\n", a, &a);
    printf("%p %d\n", p, *p);*/

    // 기말 필기 문제

    int a = 0x65000000;
    char *p = (char *)&a;     // 강제 형 변환
    printf("%x %p\n", a, &a);
    printf("%p %x\n", p, *(p + 3));
}