#include <stdio.h>

int wow = 100;

int main() {
	int score;
	printf("����(0���� 100����) �Է�: ");
	scanf("%d", &score);
	switch (score / 10)	{
        case wow:
            printf("WOW!");
            break;
		default:
            if (score < 0 || score > 100)
                printf("���� �Է��� �߸��Ǿ����ϴ�.\n");
            else
    			printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'F');	break;
		case 10: case 9:
			printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'A');	break;
		case 8:
			printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'B');	break;
		case 7:
			printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'C');	break;
		case 6:
			printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'D');	break;
	}
}