#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file1, *file2;
    char ch1, ch2;
    char fileName1[100], fileName2[100];
    int identical = 1;
    printf("Enter first file name: ");
    scanf("%99s", fileName1);
    printf("Enter second file name: ");
    scanf("%99s", fileName2);
    file1 = fopen(fileName1, "r");
    if (file1 == NULL) {
        printf("Error: Cannot open %s\n", fileName1);
        return 1;
    }
    file2 = fopen(fileName2, "r");
    if (file2 == NULL) {
        printf("Error: Cannot open %s\n", fileName2);
        fclose(file1);
        return 1;
    }
    while (1) {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);

        if (ch1 != ch2) {
            identical = 0;
            break;
        }
        if (ch1 == EOF && ch2 == EOF) {
            break;
        }
    }
    fclose(file1);
    fclose(file2);

    if (identical) {
        printf("Files are identical.\n");
    } else {
        printf("Files are different.\n");
    }
    return 0;
}
