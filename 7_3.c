#include <stdio.h>
int compareStrings(char *str1, char *str2)
{
    while (*str1 == *str2)
    {
        if (*str1 == '\0' && *str2 == '\0')
            return 0; 
			
		str1++;
        str2++;
    }
	return *str1 - *str2;  
}
int main()
{
    char str1[100], str2[100];
    int result;
	printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    result = compareStrings(str1, str2);

    if (result == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
