#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Start from n and go down until we find a prime
    for (int i = n; i >= 2; i--) {
        if (is_prime(i)) {
            printf("The largest prime number <= %d is: %d\n", n, i);
            return 0;
        }
    }

    printf("There are no prime numbers less than or equal to %d.\n", n);
    return 0;
}
