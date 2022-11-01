#include <stdio.h>
#include <math.h>

long long function(long long a, long long b, long long c) {\
    long long k = (b * b) - (4 * a * c), j = 2 * a;
    if (a == 0) {
        printf("%lld / %lld", -c, b);
    }
    else if (pow(b, 2) - 4 * a * c == 0) {
        printf("%lld / %lld", -b, (j));
    }
    else if (pow(b, 2) - 4 * a * c > 0) {
        printf("(%lld + sqrt(%lld)) / %lld\n(%lld - sqrt(%lld)) / %lld"
        , -b, abs(k), j, -b, abs(k), j);
    }
    else {
        printf("(%lld + sqrt(%lld)i) / %lld\n(%lld - sqrt(%lld)i) / %lld"
        , -b, k, j, -b, k, j);
    }
}

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    function(a, b, c);
}