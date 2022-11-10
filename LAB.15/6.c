#include <stdio.h>
#include <string.h>

int main()
{
    int n, k = 0;
    scanf("%d\n", &n);
    char str[100][20];
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);
    char kind[100][20];
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 20; j++) {
            kind[i][j] = '\0';
        }
    }
    int freq[100] = {0};
    int check = 1;
    for (int i = 0; i < n; i++) {
        check = 1;
        for (int j = 0; j <= k; j++) {
            if (strcmp(str[i], kind[j]) == 0) {
                freq[j]++;
                check = 0;
            }
        }
        if (check == 1) {
            freq[k + 1]++;
            strcpy(kind[k + 1], str[i]);
            k++;
        }
    }
    char temptc[20];
    int tempti;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (freq[j] < freq[j + 1]) {
                tempti = freq[j];
                freq[j] = freq[j + 1];
                freq[j + 1] = tempti;
                strcpy(temptc, kind[j]);
                strcpy(kind[j], kind[j + 1]);
                strcpy(kind[j + 1], temptc);

            }
            else if (freq[j] == freq[j + 1]) {
                if (strcmp(kind[j], kind[j + 1]) > 0) {
                    strcpy(temptc, kind[j]);
                    strcpy(kind[j], kind[j + 1]);
                    strcpy(kind[j + 1], temptc);
                }
            }
        }
    }
    for (int i = 0; i < k; i++) {
        printf("%d %s\n", freq[i], kind[i]);
    }
}