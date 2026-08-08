#include<stdio.h>
int main()
{
	float basic,gross,hra,da,ta;
	
	printf("Enter a basic salary: ");
	scanf("%f",&basic);
	
	printf("Enter a percentage of HRA: ");
	scanf("%f",&hra);
	
	printf("Enter a percentage of DA: ");
	scanf("%f",&da);
	
	printf("Enter a percentage of TA: ");
	scanf("%f",&ta);
	
	hra= hra/100*basic;
	da= da/100*basic;
	ta= ta/100*basic;
	
	gross= basic+hra+da+ta;
	printf("Total gross salary: %.2f",gross);
	return 0;
}
