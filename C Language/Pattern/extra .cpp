#include<stdio.h>
int main()
{
	int i,j,num=6;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(j<=5-i)
			{
				printf("%d",num);
			}
			else
			{
				printf(" ");
			}
		}
		num--;
		printf("\n");
	}
	return 0;
}
