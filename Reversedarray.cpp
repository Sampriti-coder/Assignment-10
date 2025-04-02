#include<stdio.h>
// Reverse all elements of an array
int main()
{
	int n,i,j,t;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Reversed array :");
	for(i=0,j=n-1;i<j;i++,j--)
	{
		t=arr[i];
		arr[i]=arr[j];
		printf("%d",arr[i]);
		arr[j]=t;
		printf("%d",arr[j]);
	}
	return 0;
}
	
