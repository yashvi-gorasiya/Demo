#include<stdio.h>
int main()
{
	int num,temp,n=0,rem;
	
	printf("Enter a number:");
	scanf("%d",&num);
	int original=num;
	
	while(num>0)
	{
		rem=num%10;
		temp=(rem*rem*rem);
		n += temp;
		num/=10;
	}
	
	if(original == n)
	{
		printf("%d is armstrong number",n);
	}
	else
	{
		printf("%d is not armstrong number");
	}
	return 0;
}


