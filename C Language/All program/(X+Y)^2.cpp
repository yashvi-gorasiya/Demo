#include<stdio.h>
int main()
{
	float x,y,result;
	printf("Enter the value of X:");
	scanf("%f",&x);
	printf("Enter the value of Y:");
	scanf("%f",&y);
	
	result=(x+y)*(x+y);
	
	printf("The square of the sum (%.2f + %.2f)^2 is %.2f",x,y,result);
	return 0;
}
