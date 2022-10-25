#include <stdio.h>

int main()
{
    float x = 3.14f;
    double y = -3.141592;
    long double z = 29.74;

    printf("부동소수점 자료형: %f %f %f\n", x, y, z);

    float a = 1.0 / 3.0 + 1.0 / 3.0 + 1.0 / 3.0;
    if (a - 1.0 < 0.0000000000001) {

    }
    printf("%f", a);
    return 0;
}
