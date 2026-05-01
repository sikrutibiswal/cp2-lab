/*Create a program to convert all characters of a string to uppercase using call by 
reference.*/
#include<stdio.h>
void toUppercase(char *str){
	int i=0;
	while(*(str+i)!='\0'){
		*(str+i)=toupper(*(str+i));
		i++;
	}
}
int main()
{
	char str[100];
	printf("enter a string: ");
	gets(str);
	toUppercase(str);
	printf("after: %s\n",str);
	return 0;
}
