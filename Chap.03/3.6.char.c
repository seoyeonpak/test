#include <stdio.h>

int main()
{
    char c1 = 'a';
    char c2 = 65;       // �빮�� A: 10���� �ڵ� �� 65
    char c3 = '\127';   // �빮�� W:  8���� �ڵ� �� 0127
    char c4 = '\x57';   // �빮�� W: 16���� �ڵ� �� 0x57

    printf("���� ��(����): %c %c %c %c\n", c1, c2, c3, c4);
    printf("�ڵ� ��(����): %d %d %d %d\n", c1, c2, c3, c4);

    return 0;
}
