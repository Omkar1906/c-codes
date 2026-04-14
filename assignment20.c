#include <stdio.h>

// Function without pointers (call by value)
void swapValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("\nInside swapValue (after swap): a = %d, b = %d\n", a, b);
}

// Function using pointers (call by reference)
void swapPointer(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    // Call without pointers
    swapValue(x, y);
    printf("After swapValue (in main): x = %d, y = %d\n", x, y);

    // Call with pointers
    swapPointer(&x, &y);
    printf("After swapPointer (in main): x = %d, y = %d\n", x, y);

    return 0;
}