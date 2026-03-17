/* Write a program to replace spaces in a string with hyphens.*/
#include <stdio.h>
void space(char a[])
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==' ')
		{
			a[i]='-';
		}
	}
} 
void main()
{
	char a[]="hello everyone";
	space(a);
	printf("%s",a);
}
