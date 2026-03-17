/* Develop a program to count occurrences of a specific character in a string.*/
#include<stdio.h>
#include<string.h>
int main()
{
	char temp[100];
	int c=0;
	int i;
	printf("enter a string:");
	scanf("%s",temp);
	for (i=0;temp[i]!=0;i++)
	if(temp[i]=='@'||temp[i]=='#'||temp[i]=='$'||temp[i]=='!'||temp[i]=='%'||temp[i]=='^'||temp[i]=='&'||temp[i]=='*'||temp[i]=='~')
	{
		c++;
	}
	printf("number of special characters:%d",c);
	return 0;
}
