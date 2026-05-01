/*Write a program to reverse a string using call by reference. */
#include<stdio.h>
#include<string.h>
void reversestring(char *str){
	int i, len;
	char temp;
	len=strlen(str);
	for (i=0;i<len/2;i++){
		temp=*(str+i);
		*(str+i)=*(str+len-i-1);
		*(str+len-i-1)=temp;
	}
}
int main(){
	char str[100];
	printf("enter string: ");
	gets(str);
	printf("before:%s\n",str);
	reversestring(str);
	printf("after:%s\n",str);
	return 0;
}
