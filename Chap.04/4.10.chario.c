#include <stdio.h>

int main()
{
    char abc, plus;

    printf("C ���α׷��� ����� ���ϴ� ����(A+, C-)�� �Է� >> ");
    abc = getchar();
    scanf("%c", &plus);

    printf("���� %c%c\n", abc, plus);
}