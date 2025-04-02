#include <stdio.h>
//Linear Search
int linear_search(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++) 
	{
        if (arr[i] == key) 
		{
            return i; 
        }
    }
    return -1; 
}
int main() 
{
    int n, key;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be found :");
    scanf("%d", &key);
    int result = linear_search(arr, n, key);
    if (result != -1) 
	{
        printf("Element found at index %d\n", result);
    } 
	else 
	{
        printf("Element not found\n");
    }
    return 0;
}
