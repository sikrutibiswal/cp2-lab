/*Define a function swapDistance() for the structure defined in question no.2, toswap the content of two Distance variables.*/
#include<stdio.h>
void swap(int*x,int*y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{   
    int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Before swapping:a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("After swapping:a=%d,b=%d\n",a,b);
	return 0;
}
