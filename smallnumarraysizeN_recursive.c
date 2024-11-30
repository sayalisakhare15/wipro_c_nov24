#include <stdio.h>

int findSmallest(int arr[], int size) {

    if (size == 1) {
        return arr[0];
    }

    int smallest_in_rest = findSmallest(arr, size - 1);

    if (arr[size - 1] < smallest_in_rest) {
        return arr[size - 1];
    } else {
        return smallest_in_rest;
    }
}

int main() {
    int N;
    
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter %d elements of the array: \n", N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = findSmallest(arr, N); 
    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}