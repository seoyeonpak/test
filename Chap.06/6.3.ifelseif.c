#include <stdio.h>

int main()
{
	double gpa;

	printf("������� �Է�: ");
	scanf("%lf", &gpa);

	if (gpa >= 4.3)
		printf("�ֿ��\n");
	else if (gpa >= 3.8)
		printf("���\n");
	else if (gpa >= 3.0)
		printf("���\n");
	else
		printf("3.0 �̸�\n");
}