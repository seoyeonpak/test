// 아스키 카운팅

#include <stdio.h>
#include <ctype.h>

char A[1000];
int cnt_a = 0, cnt_b = 0, cnt_c = 0;

int cnt(int n) {
    for (int i = 0; i < n; i++) {
        if (isalpha(A[i])) {
            cnt_a++;
        }
        if (isupper(A[i])) {
            cnt_b++;
        }
        if (isdigit(A[i])) {
            cnt_c++;
        }
    }
}

int main() {
    int N;
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++) {
        scanf("%c", &A[i]);
    }
    cnt(N);
    printf("%d\n", cnt_a);
    printf("%d\n", cnt_b);
    printf("%d", cnt_c);
}