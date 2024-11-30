#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    double arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    double smallest = arr[0];
    double biggest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > biggest) {
            biggest = arr[i];
        }
    }

    printf("Smallest element: %lf\n", smallest);
    printf("Biggest element: %lf\n", biggest);

    return 0;
}
