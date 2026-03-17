#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str[20] = "1234";
    int num;
	num = atoi(str);
	printf("String value = %s\n", str);
    printf("Integer value after using atoi() = %d", num);
}

