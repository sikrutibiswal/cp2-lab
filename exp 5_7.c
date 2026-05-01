/*Create a program where a pointer to a pointer (e.g., **p) is used to access and 
modify a variable of type short. */

#include <stdio.h>
int main()
{
    short num = 10;   
    short *p;           
    short **pp;         
	p = &num;           
    pp = &p;      
	printf("Original value of num = %d\n", num);
    **pp = 20;
	printf("Modified value of num = %d\n", num);
	return 0;
}
