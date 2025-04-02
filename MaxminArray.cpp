#include<stdio.h>
//To find maximum and minimum elements of an array
int main()
{
	int n,max,min,i;
	printf("Enter the size of the array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0],min=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("Maximum element is :%d\n",max);
	printf("Minimum element is :%d",min);
	return 0;
}
