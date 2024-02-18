
#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;
    int i;

    // Check if b is negative
    int sign = (b < 0) ? -1 : 1;

    // Make b positive
    b = (b < 0) ? -b : b;

    for (i = 0; i < b; i++) {
        result += a;
    }

    return (sign == -1) ? -result : result;
}

int main() {
    int num1 = -5;
    int num2 = 3;
    printf("Product: %d\n", multiply(num1, num2));
    return 0;
}
