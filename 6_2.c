#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
	int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
	int *ptr;
    ptr = arr;
    int max = *ptr;
	for(i = 1; i < n; i++)
    {
        if(*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }
	printf("Largest element is: %d", max);
	return 0;
}
