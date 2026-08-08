#include<stdio.h>
int main()
{
	int i,j,k=0;
	
	for(i=0;i<=7;i++)
	{
		for(j=0;j<=7;j++)
		{
			if((j>=5-i && j<=3+i && k==1) && (j>=i-3 && j<=11-i && k==1))
			{
				printf("*");
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
	return 0;
}
