
#include<stdio.h>
int main()
{
	int num,first,last,final;
	printf("Enter a number:");
	scanf("%d",&num);
	
	last=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	first=num;
	
	final=first+last;
	printf("Final sum of first and last value:%d",final);
	return 0;
	
}
