#include <stdio.h>

struct Owner
{
    char name[50];
    char address[100];
};

struct Car
{
    char make[50];
    char model[50];
    int year;
    struct Owner owner;
};

int main()
{
    struct Car c;

    printf("Enter car make: ");
    scanf(" %[^\n]", c.make);

    printf("Enter car model: ");
    scanf(" %[^\n]", c.model);

    printf("Enter year: ");
    scanf("%d", &c.year);

    printf("Enter owner name: ");
    scanf(" %[^\n]", c.owner.name);

    printf("Enter owner address: ");
    scanf(" %[^\n]", c.owner.address);

    printf("\n--- Car Details ---\n");
    printf("Make  : %s\n", c.make);
    printf("Model : %s\n", c.model);
    printf("Year  : %d\n", c.year);

    printf("\n--- Owner Details ---\n");
    printf("Name    : %s\n", c.owner.name);
    printf("Address : %s\n", c.owner.address);

    return 0;
}
