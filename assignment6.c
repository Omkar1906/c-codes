#include <stdio.h>

int factorial_iterative(int n);
int factorial_recursive(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial (Iterative) = %d\n", factorial_iterative(num));
    printf("Factorial (Recursive) = %d\n", factorial_recursive(num));

    return 0;
}

// Without recursion
int factorial_iterative(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// With recursion
int factorial_recursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}
