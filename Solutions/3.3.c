// 피자나라 치킨공주

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 15 == 0) {
        printf("combo");
    }
    else if (n % 3 == 0) {
        printf("pizza");
    }
    else if (n % 5 == 0) {
        printf("chicken");
    }
    else {
        printf("diet");
    }
}