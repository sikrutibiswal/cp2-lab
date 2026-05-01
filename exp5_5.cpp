#include <stdio.h>

int main()
{
    long num = 10;     
    long *ptr;         

    ptr = &num;         

    printf("Before change: %ld\n", num);

    *ptr = 50;         

    printf("After change: %ld\n", num);

    return 0;
}
