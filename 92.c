#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int i, n = strlen(str);
    for(i = 0; i < n/2; i++) {
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

int main() {
    char str[100] = "hello";
    reverse(str);
    printf("Reversed: %s", str);
    return 0;
}
