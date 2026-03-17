/*check a substring*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[50];

    printf("Enter the main string: ");
    gets(str);

    printf("Enter the substring: ");
    gets(sub);

    if (strstr(str, sub) != NULL)
        printf("Substring found in the string.");
    else
        printf("Substring not found.");

    return 0;
}

