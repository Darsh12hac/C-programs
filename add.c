#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        // Calculate the carry
        int carry = a & b;

        // Sum without considering carry
        a = a ^ b;

        // Carry is shifted by one so that adding it to a gives the required sum
        b = carry << 1;
    }
    return a;
}

int main() {
    int n1 = 12;
    int n2 = 7;
    printf("Sum: %d\n", add(n1, n2));
    return 0;
}
