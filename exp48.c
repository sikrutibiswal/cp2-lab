#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[10];
    int i, maxIndex = 0;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < 10; i++)
    {
        if(s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    printf("\nStudent with Highest Marks:\n");
    printf("Name : %s\n", s[maxIndex].name);
    printf("Roll : %d\n", s[maxIndex].roll);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}
