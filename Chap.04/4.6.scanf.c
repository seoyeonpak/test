#include <stdio.h>

int main()
{
    int month = 0;
    printf("1���� �� ��? ");
    scanf("%d", &month);
    printf("1���� %d��\n\n", month);

    int snum, credit;
    printf("����� �й��� ��û ������? ");
    scanf("%d%d", &snum, &credit);
    printf("�й�: %d ��û����: %d\n", snum, credit);
}