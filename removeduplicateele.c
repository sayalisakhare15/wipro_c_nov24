#include <stdio.h>

int main() {
    int n;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    float arr[n];

    // Get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Reverse the array
    for (int i = 0; i < n / 2; i++) {
        float temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Display the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}