#include <stdio.h>
void toUpper(char *str)
{
    while(*str != '\0') 
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32; 
        }
        str++;  
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str); 
    toUpper(str); 
    printf("Uppercase string: %s", str);
    return 0;
}
