#include<stdio.h>
int main()
{
	int num,sum=0,rem,rev,rev2=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	int org1=num;
	
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	int org=sum;
	while(sum>0)
	{
		rev=sum%10;
		rev2=rev2*10+rev;
		sum/=10;
	}
	
	if((org*rev2)==org1)
	{
		printf("%d is magic number",org1);
	}
	else
	{
		printf("%d is not magic number",org1);
	}
	
	return 0;
}
