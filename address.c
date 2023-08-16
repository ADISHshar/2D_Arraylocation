#include <stdio.h>
#include <stdint.h>

int main()
{	
	int i,j,r,c;
	int arr[10][10];
	
	printf("Enter number of rows: ");
	scanf("%d",&r);
	printf("Enter number of columns: ");
	scanf("%d",&c);
	
	printf("Enter elements: \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		
     for (i=0;i<r;i++)
	{
        for (j=0; j<c;j++)
		{
            arr[i][j] = i*c+j;
        }
    }

    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            printf("arr[%d][%d] address: %u\n", i, j, &arr[i][j]);
        }
    }
    
    return 0;
}

