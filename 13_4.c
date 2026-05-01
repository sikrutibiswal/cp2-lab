#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    
    printf("Enter filename: ");
    scanf("%s", filename);
    
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open file '%s'<br>", filename);
        return 1;
}
