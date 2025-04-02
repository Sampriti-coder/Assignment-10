#include<stdio.h>
//Transpose Matrix
int main()
{
	int a[3][3],b[3][3];
	int i,j;
	printf("Enter elements of the array\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Original Matrix :");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Transposed Matrix :\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
