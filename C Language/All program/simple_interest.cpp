#include<stdio.h>
int main()
{
	float principal,time,rate,simple_interest;
	
	printf("Enter principal amount: ");
	scanf("%f",&principal);
	
	printf("Enter a time duration(in years): ");
	scanf("%f",&time);
	
	printf("Enter a rate(in percentage): ");
	scanf("%f",&rate);
	
	simple_interest=(principal*rate*time)/100;
	
	printf("Simple interest is %2.f",simple_interest);
	return 0;
}
