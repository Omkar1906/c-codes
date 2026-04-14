#include <stdio.h>

int main() {
    int num1, num2;
    int smallestDivisor = -1, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find smallest common divisor other than 1
    for(int i = 2; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            smallestDivisor = i;
            break;
        }
    }

    // Display smallest common divisor
    if(smallestDivisor != -1)
        printf("Smallest Common Divisor = %d\n", smallestDivisor);
    else
        printf("No common divisor other than 1\n");

    // Find GCD
    for(int i = 1; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("Greatest Common Divisor (GCD) = %d\n", gcd);

    return 0;
}

