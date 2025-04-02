#include <stdio.h>
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
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
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
