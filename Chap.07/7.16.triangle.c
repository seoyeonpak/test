#include <stdio.h>

int main()
{
	const int MAX = 5;
	int i, j;

	for (i = 1; i <= MAX; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		puts("");
	}
}