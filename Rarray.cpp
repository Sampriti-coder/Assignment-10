#include <stdio.h>
//Reversed Array
void print_reverse(int arr[],int n) 
{
    for (int i = n - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int n;
    printf("Enter the size of the array :\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Array in reversed order :");
    print_reverse(arr, n);
    return 0;
}
