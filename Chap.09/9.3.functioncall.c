#include <stdio.h> 

int add(int a, int b);
int findMax(int, int);
void printMin(int, int);

int main(void)
{
	int a = 10, b = 15;

	int max = findMax(a, b);
	printf("�ִ�: %d\n", max);
	printf("��: %d\n", add(a, b));

	//��ȯ ���� ���� �Լ�ȣ��
	printMin(a, b);
}
