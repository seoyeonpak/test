#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if ((n % 15) != 0) {
        if ((n % 3) < 0.0000000001) {
            printf("pizza");
        }
        else if ((n % 5) < 0.0000000001) {
            printf("chicken");
        }
        else {
            printf("diet");
        }
    }
    else {
            printf("combo");
    }
        }