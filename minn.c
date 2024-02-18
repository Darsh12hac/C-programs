#include <stdio.h>

// Function to find the minimum of two numbers
int min(int a, int b) {
    return (a < b) ? a : b;
}

int minOfMultiple(int arr[], int size) {
    int minimum = arr[0]; // Initialize minimum with the first element

    // Iterate through the array to find the minimum
    for (int i = 1; i < size; i++) {
        minimum = min(minimum, arr[i]);
    }

    return minimum;
}

int main() {
    int numbers[] = {10, 5, 7, 3,-1, 8};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Find the minimum number
    int minimum = minOfMultiple(numbers, size);

    printf("Minimum number: %d\n", minimum);

    return 0;
}
