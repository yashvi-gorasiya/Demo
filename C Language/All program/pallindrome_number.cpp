#include<stdio.h>
int main()
{
	int num,rem,rev;
	printf("Enter a number:");
	scanf("%d",&num);
	int org=num;
	
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	
	if(org == rev)
	{
		printf("%d is pallindrome number",org);
	}
	else
	{
		printf("%d is  not pallindrome number",org);
	}
	return 0;
}
