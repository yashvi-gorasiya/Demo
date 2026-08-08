#include<stdio.h>
int main()
{
	int num,flag=1;
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num<1)
	{
		flag=0;
	}
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
	}
	
	if(flag==1)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is not prime number",num);
	}
	return 0;
}
