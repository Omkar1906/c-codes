#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;

    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Check pass condition
    if(m1 >= 40 && m2 >= 40 && m3 >= 40 && m4 >= 40 && m5 >= 40) {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5;

        printf("\nResult: PASS");
        printf("\nPercentage = %.2f%%\n", percentage);

        // Grade calculation
        if(percentage >= 75)
            printf("Grade: Distinction");
        else if(percentage >= 60)
            printf("Grade: First Division");
        else if(percentage >= 50)
            printf("Grade: Second Division");
        else if(percentage >= 40)
            printf("Grade: Third Division");
    } 
    else {
        printf("\nResult: FAIL");
    }

    return 0;
}