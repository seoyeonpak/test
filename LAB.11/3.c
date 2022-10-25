#include <stdio.h>

int dayday(int year, int month) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 2:
            if (year % 400 == 0) {
                return 29;
            }
            else if (year % 4 == 0) {
                    if (year % 100 != 0) {
                        return 29;
                    }
            }
            else {
                return 28;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
    }
}

int main() {
    int y, m, d, i = 0;
    scanf("%d %d %d", &y, &m, &d);
    while (i < 1000) {
        if (dayday(y, m) > d) {
            d++;
        }
        else {
            d = 1;
            if (m < 12) {
                m++;
            }
            else {
                m = 1;
                y++;
            }
        }
    i++;
    }
    printf("%d %d %d", y, m, d);
}