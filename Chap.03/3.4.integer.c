#include <stdio.h>

int main()
{
    short sVar = 32000;
    int iVar = -2140000000;

    long long dist1 = 2720000000000; // 27�� 2õ
    __int64 dist2   = 4500000000000; // 45��

    printf("������ õ�ռ� ���� �Ÿ�(km): %lld\n", dist1);
    printf("�¾�� �ؿռ� ���� �Ÿ�(km): %lld\n", dist2);

    return 0;
}
