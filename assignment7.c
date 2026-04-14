#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks1, marks2, marks3;
    float total, percentage;
};

int main() {
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input details
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks (3 subjects): ");
        scanf("%f %f %f", &s[i].marks1, &s[i].marks2, &s[i].marks3);

        // Calculation
        s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
        s[i].percentage = s[i].total / 3;
    }

    // Display result
    printf("\n----- Student Results -----\n");
    for(int i = 0; i < n; i++) {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%\n", s[i].percentage);
    }

    return 0;
}
