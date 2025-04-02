#include<stdio.h>
// Reverse all elements of an array
int main() 
{
    int n, i, j, t;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
	printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    for (i = 0, j = n - 1; i < j; i++, j--)
	 {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    printf("\nReversed array: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
	return 0;
}

