#include <stdio.h>
int countVowels(char *str) 
{
    int count = 0;
    while (*str != '\0') 
	{
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') 
		{
            count++;
        }
        str++;  
    }
    return count;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  
    int result = countVowels(str);
    printf("Number of vowels = %d", result);
    return 0;
}
