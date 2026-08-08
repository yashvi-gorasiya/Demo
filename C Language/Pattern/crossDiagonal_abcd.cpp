#include<stdio.h>
int main()
{
	int i ,j;
	char ch ='A';
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i==j || i+j == 8)
			{
				printf("%c",ch);
			}
			else
			{
				printf(" ");
			}
		}
		ch++;
		printf("\n");
	}
}

