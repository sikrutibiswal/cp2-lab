#include <stdio.h>
int countWords(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int words = countWords(str);
    printf("Number of words = %d", words);
    return 0;
}
