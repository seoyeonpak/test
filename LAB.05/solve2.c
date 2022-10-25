#include <stdio.h>

int main() {
    int N, i, idx;
    scanf("%d", &N);
    int arr[N];
    for (i=0; i<N; i++) {
        scanf("%d", &arr[i]);
        idx = arr[i] - 'A';
        arr[idx]++;
        printf("%c", arr['A'+idx]);
    }

}