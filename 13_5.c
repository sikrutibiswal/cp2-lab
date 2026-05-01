#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;
    char filename[256];
    int ch;
    printf("Enter the file name: ");
    if (scanf("%255s", filename) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
