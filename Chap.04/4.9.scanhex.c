#include <stdio.h>

int main()
{
    int hex;
    printf("16���� ����(1A ��)�� �Է��ϼ��� >> ");
    scanf("%x", &hex);
    printf("%o %d %X\n\n", hex, hex, hex);

    printf("����(0 �Ǵ� 0x ���� ǥ�ù������)�� �Է��ϼ��� >> ");
    scanf("%i", &hex);
    printf("%#o %d %#x\n\n", hex, hex, hex);
}