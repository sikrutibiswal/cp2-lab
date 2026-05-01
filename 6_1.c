#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
	return 0;
}
