#include<stdio.h>

int main() {
    int num, digit, position = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (position % 2 == 0) sum += digit;
        position++;
        num /= 10;
    }

    printf("Sum of even-placed digits: %d\n", sum);

    return 0;
}
