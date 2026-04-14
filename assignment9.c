#include <stdio.h>

int main() {
    int num, original, remainder;
    int sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        remainder = num % 10;          // get last digit
        sum += remainder * remainder * remainder;  // cube of digit
        num = num / 10;               // remove last digit
    }

    if(sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is NOT an Armstrong number\n", original);

    return 0;
}