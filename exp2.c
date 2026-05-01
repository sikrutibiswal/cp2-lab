#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("average: %s num1,num2", argv[0]);
return 1;
}
double sum = 0;
int count = argc - 1;
for(int i = 1; i < argc; i++) 
{
sum += atof(argv[i]);
}
printf("Average: %.2f\n", sum / count);
return 0;
}
