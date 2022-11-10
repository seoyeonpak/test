#include <stdio.h>
#include <string.h>

void swap(char **a, char **b) {
    char *t = *a;
    *a = *b;
    *b = t;
}

void bubblesort(int n, char *ptr[]) {
    int k = n;
    while (k > 0) {
        for (int i = 0; i < k - 1; i++) {
            if (strlen(ptr[i]) > strlen(ptr[i + 1])) {
                swap(&ptr[i], &ptr[i + 1]);
            }
            else if (strlen(ptr[i]) == strlen(ptr[i + 1])) {
                if (strcmp(ptr[i], ptr[i + 1]) > 0) {
                    swap(&ptr[i], &ptr[i + 1]);
                }
            }
        }
        k--;
    }
}

int main()
{
    int n;
    scanf("%d\n", &n);
    char str[10][20];
    for (int i = 0; i < n; i++)
        gets(str[i]);
    char *ptr[10];
    for (int i = 0; i < n; i++)
        ptr[i] = str[i];
    bubblesort(n, ptr);
    for (int i = 0; i < n; i++)
        puts(ptr[i]);
}