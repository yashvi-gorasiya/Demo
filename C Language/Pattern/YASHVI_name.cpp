#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=35;j++)
		{
			//Y
			if(i==1 && (j==1 || j==5) || i==2 && (j==2 || j==4) || j==3 && (i==3 || i==4 || i==5))
			{
				printf("*");
			}
			//A
			else if(j==7 || j==11 || (i==1 || i==3) && (j>=7 && j<=11))
			{
				printf("*");
			}
			//S
			else if((i==1 || i==3 || i== 5) && (j>=13&&j<=17) || (i==2 && j==13) || (i==4 && j==17))
			{
				printf("*");
			}
			//H
			else if(j==19 || j==23 || (i==3 && j>=19 && j<=23))
			{
				printf("*");
			}
			//V
			else if(i==1 && (j==25 || j==29) || i==3 && (j==26 || j==28 ) || (i==5 && j==27))
			{
				printf("*");
			}
			//I
			else if((i==1 || i==5) && (j>=31 && j<=35) || j==33)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		
		printf("\n");
	}
	return 0;
}
