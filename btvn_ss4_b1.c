#include <stdio.h>

int main() {
    int number;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("so %d la do duong.\n", number);
    } else if (number < 0) {
        printf("so %d la so am.\n", number);
    } else {
        printf("so ban nhap la so 0.\n");
    }

    return 0;
}
