#include <stdio.h>

struct Department
{
    char dept_name[50];
};

struct Employee
{
    char name[50];
    int id;
    float salary;
    struct Department dept;
};

int main()
{
    struct Employee emp[10];
    struct Employee temp;
    int i, j;
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of Employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("
