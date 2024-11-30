#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Find sum of the series: n + n² + n³ + ... for 10 terms
int main(int argCount, char *args[]) {
    // Input: term value (n)
    int termValue = atoi(args[1]);           // Convert the first argument to integer (n)
    long long int sumOfTerms = 0;            // Initialize the sum to 0

    printf("N value = %d, Number of terms = 10\n", termValue);

    // Loop to calculate the series
    for (int i = 1; i <= 10; i++) {
        sumOfTerms += pow(termValue, i);     // Calculate n^i and add to sum
    }

    // Output the result
    printf("Sum of 10 terms is %lld\n", sumOfTerms);
    return 0;
}