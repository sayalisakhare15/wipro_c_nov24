#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {

        return 0;
    }
    return n % 10 + sumOfDigits(n / 10);  
}

int main() {
    int number;
    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;  
    }

    int sum = sumOfDigits(number);  
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}