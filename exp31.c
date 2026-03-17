/*define structure to store student -name,roll no and marks*/
#include<stdio.h>
typedef struct stud
{
	char name[30];
	int roll;
	float marks;
}student;
main()
{
	student s1={"Juhi",33,8.4f};
	student s2;
	printf("Enter student details: ");
	gets(s2.name);
	scanf("%d %f",&s2.roll,&s2.marks);
	printf("Name:%s\nRollno.:%d\nmarks:%f",s1.name,s1.roll,s1.marks);
	printf("\n\nName:%s\nRollno.:%d\nmarks:%f",s2.name,s2.roll,s2.marks);
}
