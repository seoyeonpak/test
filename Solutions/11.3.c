#include <stdio.h>

void after1000(int year, int month, int day) {
    int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int cnt = 1000;
    while (cnt > 0) {
        cnt--;
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            m[1] = 29;
        }
        else {
            m[1] = 28;
        }
        if (day == m[month - 1]) {
            day = 1;
            if (month == 12) {
                month = 1;
                year++;
            }
            else {
                month++;
            }
        }
        else {
            day++;
        }
    }
    printf("%d %d %d", year, month, day);
}

int main() {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    after1000(y, m, d);
}