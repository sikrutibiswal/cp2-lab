/*Write a program to swap two numbers using call by reference.*/
#include<stdio.h>
void swapNumber(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	printf("Before: x=%d,y=%d\n",x,y);
	swapNumber(&x,&y);
	printf("After:x=%d,y=%d\n",x,y);
	return 0;
}
