#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char tempt[10000];
    strcpy(tempt, a);
    strcpy(a, b);
    strcpy(b, tempt);
}

void bubblesort(int n, char (*str)[20]) {
    int k = n;
    while (k > 0) {
        for (int i = 0; i < k - 1; i++) {
            if (strcmp(str[i], str[i + 1]) > 0) {
                swap(str[i], str[i + 1]);
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
    bubblesort(n, str);
    for (int i = 0; i < n; i++)
        puts(str[i]);
}