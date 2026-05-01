/*Create structure to store details of book. Store and print the details of 5 books 
using pointer.*/
#include<stdio.h>
struct book{
	char name[50];
	char author[50];
	float price;
};
int main(){
	struct book b[5];
	struct book *p;
	int i;
	p=b;
	for(i=0;i<5;i++){
		printf("Enter details of book %d\n",i+1);
		printf("Name: ");
		scanf("%[^\n]",(p+i)->name);
		printf("Author: ");
		scanf("%[^\n]",(p+i)->author);
		printf("Price: ");
		scanf("%[^\n]",(p+i)->price);
	}
	printf("\nBook Details:\n");
	for(i=0;i<5;i++){
		printf("\n Book %d\n",i+1);
		printf("Name:%s\n",(p+i)->name);
		printf("Author:%s\n",(p+i)->author);
		printf("Price:%.2f\n",(p+i)->price);
	}
	return 0;
}
