/*Create structure to store details of book. Store and print the details of 5 books using pointer*/
#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    float price;
};
int main() 
{
    struct Book b[5];
    struct Book *ptr = b;
	int i;
	for(i=0;i<5;i++);
	{
	    printf("Enter details of book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", (ptr + i)->title);
        printf("Author: ");
        scanf(" %[^\n]", (ptr + i)->author);
        printf("Price: ");
        scanf(" %[^\n]",&(ptr + i)->price);
    }
	printf("\nBook Details:\n");
    for(i=0;i<5;i++) 
	{
        printf("\nBook %d\n", i + 1);
        printf("Title: %s\n", (ptr + i)->title);
        printf("Author: %s\n", (ptr + i)->author);
        printf("Price: %.2f\n", (ptr + i)->price);
    }
        return 0;
}
