#include<stdio.h>

int isPrime(int n) {
    // Base cases
    if (n <= 1) {
        return 0; // Not prime
    }
    if (n <= 3) {
        return 1; // 2 and 3 are prime
    }

    // Check if n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // Not prime
    }

    // Check for divisibility by numbers of the form 6k ± 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
