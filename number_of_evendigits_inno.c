#include <stdio.h>

int main() {
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) count++;
        num /= 10;
    }

    printf("Number of even digits: %d\n", count);

    return 0;
}