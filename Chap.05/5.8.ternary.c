#include <stdio.h>

int main()
{
	int a = 0, b = 0;
	printf("�� ���� �Է� >> ");
	scanf("%d%d", &a, &b);

	printf("�ִ밪: %d ", (a > b) ? a : b);
	printf("�ּҰ�: %d\n", (a < b) ? a : b);
	printf("���밪: %d ", (a > 0) ? a : -a);
	printf("���밪: %d\n", (b > 0) ? b : -b);

	((a % 2) == 0) ? printf("¦�� ") : printf("Ȧ�� ");
	printf("%s\n", ((b % 2) == 0) ? "¦��" : "Ȧ��");
}