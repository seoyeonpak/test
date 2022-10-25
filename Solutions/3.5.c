// 윤년과 월별 날짜 계산

#include <stdio.h>

int main() {
    int year, month;
    scanf("%d %d", &year, &month);
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("%d", 31);
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0) {
                printf("%d", 29);
            }
            else if (year % 400 == 0) {
                printf("%d", 29);
            }
            else {
                printf("%d", 28);
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("%d", 30);
    }
}