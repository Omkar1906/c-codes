#include <stdio.h>

// Function for factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function for power
int power(int x, int y) {
    int result = 1;
    for(int i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int choice;
    int a, b;
    float result;

    printf("===== CALCULATOR MENU =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d\n", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d\n", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d\n", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            if(b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Error! Division by zero\n");
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%d %d", &a, &b);
            printf("Result = %d\n", power(a, b));
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("Result = %d\n", factorial(a));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
