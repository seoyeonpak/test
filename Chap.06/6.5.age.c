#include <stdio.h>

int main()
{
	int	age = 0;
	printf("����� ���̴�? ");
	scanf("%d", &age);

	if (age >= 20) {
		if (age >= 65)
			printf("����� ����Դϴ�.\n");
		else
			printf("����� �����Դϴ�.\n");
	}
	else {
		printf("����� �̼������Դϴ�.\n");
	}
}