#include <stdio.h>
// Transpose Matrix
int main() 
{
    int a[2][2] = {{5, 6}, {9, 0}};
    int b[2][2]; 
	printf("Original Matrix:\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            b[i][j] = a[j][i]; 
        }
    }
 printf("Transposed Matrix:\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

