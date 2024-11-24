#include <stdio.h>

int main() {
    int day, month, year, isValid = 1;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        isValid = 0;
    } else {
        int maxDays;
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                maxDays = 29;
            } else {
                maxDays = 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;
        } else {
            maxDays = 31;
        }

        if (day < 1 || day > maxDays) {
            isValid = 0;
        }
    }

    if (isValid) {
        printf("Ngay %d/%d/%d la ngay hop le.\n", day, month, year);
    } else {
        printf("Ngay %d/%d/%d la ngay khong hop le.\n", day, month, year);
    }

    return 0;
}
