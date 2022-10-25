#include <stdio.h> 

// n!을 구하는 재귀함수
int factorial(int number)
{
	if (number <= 1)
		return 1;
	else
		return (number * factorial(number - 1));
}

int main(void)
{
	for (int i = 1; i <= 10; i++)
		printf("%2d! = %d\n", i, factorial(i));

	return 0;
}
