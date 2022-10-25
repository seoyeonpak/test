#include <stdio.h>

#define ROWSIZE 2
#define COLSIZE 3

int main() {
	// 이차원 배열선언
	int td[ROWSIZE][COLSIZE];

	// 이차원 배열원소에 값 저장
	td[0][0] = 1; td[0][1] = 2; td[0][2] = 3;
	td[1][0] = 4; td[1][1] = 5; td[1][2] = 6;

	printf("반목문 for를 이용하여 출력\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
			printf("td[%d][%d] == %d ", i, j, td[i][j]);
		printf("\n"); //행마다 한 줄 출력 후 다음 줄로 이동
	}
}