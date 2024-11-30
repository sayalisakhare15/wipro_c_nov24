#include <stdio.h>

// Recursive function to print Fibonacci series
void printFibonacci(int n, int a, int b) {
    if (n == 0) {
        return;
    }
    printf("%d ", a);
    printFibonacci(n - 1, b, a + b);  // Recursively call for the next term
}

int main() {
    int N;
    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &N);

    // First two terms of the series are 1 and 2
    if (N >= 1) {
        printf("Fibonacci series: ");
        printFibonacci(N, 1, 2);  // Start with 1 and 2
    } else {
        printf("Please enter a valid number of terms (greater than 0).\n");
    }

    return 0;
    
}