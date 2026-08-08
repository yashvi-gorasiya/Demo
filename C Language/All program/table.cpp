#include<stdio.h>
int main()
{
	int j,num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	printf("Enter a last multiplier: ");
	scanf("%d",&j);
	
	for(int i=1;i<j;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	return 0;
}
