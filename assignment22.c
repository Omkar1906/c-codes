#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\n===== STRING MENU =====\n");
    printf("1. Length of string\n");
    printf("2. Copy string\n");
    printf("3. Concatenate strings\n");
    printf("4. Compare strings\n");
    printf("5. Reverse string\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length of first string = %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("After copy, second string = %s\n", str2);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated string = %s\n", str1);
            break;

        case 4:
            if(strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 5:
            strrev(str1);   // Note: may not work in some compilers
            printf("Reversed string = %s\n", str1);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

