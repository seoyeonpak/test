#include <stdio.h>

int main()
{
    int x =10, y =20;
    // swap x and y here
    // int t = x; x = y; y = t;
    // x = x + y; // x + y, y  *
    // y = x - y; // x + y, x  /
    // x = x - y; // y, x      /
    // swap x and y here with XOR operator
    // without temporary variable.
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("%d %d", x, y);
}