/*lowercase*/
#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
	printf("Enter a string: ");
    gets(str);
	strlwr(str);
	printf("String in lowercase: %s", str);
}

