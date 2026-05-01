/*Write a program demonstrating pointer arithmetic with a double array. Show 
how to iterate through the array using a pointer. */

#include <stdio.h>

int main()
{
    double arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *ptr;
    int i;

    ptr = arr;   

    printf("Elements of the array are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%lf\n", *ptr);  
        ptr++;                  
    }

    return 0;
}
