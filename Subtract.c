#include <stdio.h>

int subtract(int a, int b) {
    // Calculate the negative value of b
    b = ~b + 1;

    // Add a and the negative value of b
    return a + b;
}

int main() {
    int num1 = 10;
    int num2 = 5;
    printf("Difference: %d\n", subtract(num1, num2));
    return 0;
}
