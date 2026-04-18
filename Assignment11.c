#include <stdio.h>
#include <math.h>

int main() {
    int num;
    long long factorial = 1;
    int isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // a) Square root
    if (num >= 0)
        printf("Square root: %.2f\n", sqrt(num));
    else
        printf("Square root: Not defined for negative numbers\n");

    // b) Square
    printf("Square: %d\n", num * num);

    // c) Cube
    printf("Cube: %d\n", num * num * num);

    // d) Check if prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    printf("Is prime: %s\n", isPrime ? "Yes" : "No");

    // e) Factorial
    if (num < 0) {
        printf("Factorial: Not defined for negative numbers\n");
    } else {
        for (int i = 1; i <= num; i++) factorial *= i;
        printf("Factorial: %lld\n", factorial);
    }

    // f) Prime factors
    printf("Prime factors: ");
    int temp = num;
    for (int i = 2; i <= temp; i++) {
        while (temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }
    printf("\n");

    return 0;
}

