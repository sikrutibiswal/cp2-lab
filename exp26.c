/*convert string to uppercase*/
#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
	printf("Enter a string: ");
    gets(str);
	strupr(str);
	printf("Uppercase string: %s", str);
}

