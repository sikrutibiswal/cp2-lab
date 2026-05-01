#include <stdio.h>
int main() {
    char str[100];
    char ch;
    int count = 0;
    char *ptr;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to find: ");
    scanf(" %c", &ch);
	ptr = str;
    while (*ptr != '\0') {
        if (*ptr == ch) {
            count++;
        }
        ptr++;
    }
    printf("Frequency of '%c' = %d", ch, count);
    return 0;
}
