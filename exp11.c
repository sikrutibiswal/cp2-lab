//program to take a string as input and print it
#include<stdio.h>
void printstring(char s[])
{
	int i;
	for(i=0;s[i]=0;i++)
	printf("%c",s[i]);
}
main()
{
	printstring("hello world");
}
