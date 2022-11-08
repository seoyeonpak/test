#include <stdio.h>
#define SIZE 100

void swap(char *s, int i, int j) {
    int t = *(s + i);
    *(s + i) = *(s + j);
    *(s + j) = t;
}

void bubblesort(int n, char *s) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(s + j) > *(s + j + 1))
                swap(s, j, j + 1);
        }
    }
}

int is_anagram(int n, char *s1, char *s2) {
    bubblesort(n, s1);
    bubblesort(n, s2);
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    char str1[SIZE], str2[SIZE];
    scanf("%s", str1);
    scanf("%s", str2);
    printf(is_anagram(n, str1, str2) ? "yes" : "no");
}