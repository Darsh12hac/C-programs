
#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

    // Copy the value of num to a temporary variable
    originalNum = num;

    // Calculate the number of digits
    int digits = countDigits(num);

    // Calculate Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;

        // Power of remainder with the number of digits
        result += pow(remainder, digits);

        // Remove last digit
        originalNum /= 10;
    }

    // Check if num is equal to the sum of its own digits raised to the power of the number of digits
    if (result == num) {
        return 1; // Armstrong number
    } else {
        return 0; // Not Armstrong number
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
