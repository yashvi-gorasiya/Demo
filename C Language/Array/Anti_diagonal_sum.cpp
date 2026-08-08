#include<stdio.h>
int main()
{
	int r,c,sum=0;
	printf("Enter a row and column:");
	scanf("%d %d",&r,&c);
	int arr[r][c];

	printf("Enter a elements:");

	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			scanf("%d",&arr[i][j]);
			if(i+j == c-1)
			{
				sum+=arr[i][j];
			}
		}
	}

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("Total sum of anti-diagonal element: %d",sum);
	return 0;
}



