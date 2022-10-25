#include <stdio.h>

#define PI 3.141592 //const double PI = 3.141592;

int main() {
    double r;
    scanf("%lf", &r);
    printf("%.4lf\n", 2*PI*r);
    printf("%.8lf", PI*r*r);
}