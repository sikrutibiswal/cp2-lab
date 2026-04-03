/*Define a structure Distance to store distance in kilometer, meter & centimeter.*/
#include <stdio.h>
struct Distance 
{
    int km;
    int m;
    int cm;
};
int main() 
{
    struct Distance d[5];
    struct Distance *ptr = d;
    int i;
    for(i = 0; i < 5; i++);
	{
        scanf("%d %d %d", &d[i].km, &d[i].m, &d[i].cm);
    }
	int maxIndex = 0;
    long maxValue = ptr[0].km * 100000 + ptr[0].m * 100 + ptr[0].cm;
	for(i = 1; i < 5; i++)
	 {
        long value = ptr[i].km * 100000 + ptr[i].m * 100 + ptr[i].cm;
        if(value > maxValue) 
		{
            maxValue = value;
            maxIndex = i;
		}
    }
	printf("Longest Distance: %d km %d m %d cm\n");
	scanf("ptr[maxIndex].km,ptr[maxIndex].m,ptr[maxIndex].cm");
	return 0;
}
