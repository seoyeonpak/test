#include <stdio.h>

int main()
{
	int n;
	printf("���� �Է�: ");
	scanf("%d", &n);

	if (n % 2) // if (n % 2 != 0)
	{
		printf("Ȧ��\n");
	}
	else
	{
		printf("¦��\n");
	}

	//���ǿ����� �̿�
	(n % 2) ? printf("Ȧ��\n") : printf("¦��\n");
}