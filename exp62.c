/*Implement a function to find the largest element in an array using pointers.*/
#include <stdio.h>
int largest(int *ptr, int n)
{
int i, max = *ptr;
for(i = 1; i < n; i++)
{
if(*(ptr + i) > max)
{
   max = *(ptr + i);
}
}
return max;
}
     int main()
{
int n, i, arr[100], max;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter elements:\n");
for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
max = largest(arr, n);
printf("Largest element = %d", max);
return 0;
}

