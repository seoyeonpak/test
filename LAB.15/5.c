#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void wordcnt(int n, char str[][20], char table[][20], int freg[]) {
    
}

int main()
{
    int n, k = 0;
    scanf("%d\n", &n);
    char str[100][20];
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);
    char table[100][20];
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 20; j++) {
            table[i][j] = '\0';
        }
    }
    int freg[100] = {0};
    strcpy(table[0], str[0]);
    freg[0]++;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= k; j++) {
            if (strcmp(table[j], str[i]) == 0) {
                freg[j]++;
            }
            else {
                k++;
                strcpy(table[k], str[i]);
            }
        }
    }
    printf("%d", 1);
}