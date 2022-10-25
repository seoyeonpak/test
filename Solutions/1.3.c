#include <stdio.h>
const double PI = 3.141592; //#define PI 3.141592;

int main() {
    double r; // float으로 하지 말 것 왜? float으로 해도 실행되는데
    scanf("%lf", &r);
    printf("%.4lf\n", 2*PI*r);
    printf("%.8lf", PI*r*r);
}