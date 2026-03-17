#include <stdio.h>
#include <string.h>
void substr(char str[], int start, int length)
{
    int i;
    char sub[50];
	for(i = 0; i < length && str[start + i] != '\0'; i++)
    {
        sub[i] = str[start + i];
    }
	sub[i] = '\0';
	printf("Substring is: %s", sub);
}
void main()
{
    char str[100];
    int start, length;
	printf("Enter a string: ");
    gets(str);
	printf("Enter starting position: ");
    scanf("%d", &start);
	printf("Enter length of substring: ");
    scanf("%d", &length);
	substr(str, start, length);
}
