#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    char ch;
    printf("Enter the source file name: ");
    scanf("%99s", sourceName);
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file '%s'.\n", sourceName);
        return 1;
    }
    printf("Enter the destination file name: ");
    scanf("%99s", destName);
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination file '%s'.\n", destName);
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    printf("File copied successfully from '%s' to '%s'.\n", sourceName, destName);
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}
