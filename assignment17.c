#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    float x, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int power = 2*i + 1;
        float term = 1;

        // Calculate x^power
        for(int j = 1; j <= power; j++) {
            term *= x;
        }

        term = term / factorial(power);

        // Alternate sign
        if(i % 2 == 0)
            sum += term;
        else
            sum -= term;
    }

    printf("Sum of sine series = %.5f\n", sum);

    return 0;
}
