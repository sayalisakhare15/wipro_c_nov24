#include <stdio.h>

int main() {
    int n, element, frequency = 0;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element whose frequency is to be found
    printf("Enter the element to find its frequency: ");
    scanf("%d", &element);

    // Count the frequency of the chosen element
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            frequency++;
        }
    }

    // Display the frequency
    printf("The frequency of %d is: %d\n", element, frequency);
    return 0;
}