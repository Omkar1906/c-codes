#include <stdio.h>

int main() {
    FILE *source, *target;
    char ch;

    // Open source file in read mode
    source = fopen("source.txt", "r");

    // Check if file exists
    if(source == NULL) {
        printf("Error: Source file not found!\n");
        return 1;
    }

    // Open target file in write mode
    target = fopen("target.txt", "w");

    // Copy character by character
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully!\n");

    // Close files
    fclose(source);
    fclose(target);

    return 0;
}
