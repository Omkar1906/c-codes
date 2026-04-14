#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int i, length = 0, flag = 1;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str1);

    // i) Length of string
    for(i = 0; str1[i] != '\0'; i++) {
        length++;
    }
    printf("Length = %d\n", length);

    // ii) String reversal
    for(i = 0; i < length; i++) {
        temp[i] = str1[length - i - 1];
    }
    temp[i] = '\0';
    printf("Reversed string = %s\n", temp);

    // iii) Equality check
    printf("Enter another string: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // iv) Palindrome check
    for(i = 0; i < length; i++) {
        if(str1[i] != temp[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is Palindrome\n");
    else
        printf("String is NOT Palindrome\n");

    // v) Substring check
    if(strstr(str1, str2) != NULL)
        printf("'%s' is a substring of '%s'\n", str2, str1);
    else
        printf("'%s' is NOT a substring of '%s'\n", str2, str1);

    return 0;
}

