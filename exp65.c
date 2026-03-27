/*Create a function to sort an array in ascending order using pointers*/
#include<stdio.h>
void sort(int *ptr, int n)
{
int i, j, temp;
   for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}
int main()
{
    int n, i, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
	printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
	sort(arr, n);
	printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}
