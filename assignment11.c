#include <stdio.h>
#include <math.h>

// Function to check prime
int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

// Function to find factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print prime factors
void primeFactors(int n) {
    printf("Prime factors: ");
    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    printf("\n");
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // a) Square root
    printf("Square root = %.2f\n", sqrt(num));

    // b) Square
    printf("Square = %d\n", num * num);

    // c) Cube
    printf("Cube = %d\n", num * num * num);

    // d) Prime check
    if(isPrime(num))
        printf("Number is Prime\n");
    else
        printf("Number is NOT Prime\n");

    // e) Factorial
    printf("Factorial = %lld\n", factorial(num));

    // f) Prime factors
    primeFactors(num);

    return 0;
}