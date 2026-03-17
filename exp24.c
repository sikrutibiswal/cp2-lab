/*copy one string to another*/
#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100];
	printf("Enter a string: ");
    gets(str1);
	strcpy(str2, str1);
	printf("Copied string is: %s", str2);
}

