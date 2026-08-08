#include<stdio.h>
int main()
{
	float gross,basic,hra,da,allow,pf;
	char grade;
	
	printf("Enter a basic salary: ");
	scanf("%f",&basic);
	
	hra = basic * 20 / 100;
	da = basic * 50 / 100;
	pf = basic * 11 / 100;
	
	printf("Enter a grade A/B and C:");
	scanf(" %c",&grade);
	
	if(grade=='A')
	{
		allow=1700;
	}
	else if(grade=='B')
	{
		allow=1500;
	}
	else if(grade=='C')
	{
		allow=1300;
	}
	
	printf("hra: %.2f\n",hra);
	printf("da: %.2f\n",da);
	printf("allow: %.2f\n",allow);
	printf("pf: %.2f\n",pf);
	
	gross = basic + hra + da + allow - pf;
	printf("Total gross salary : %.2f",gross);
	return 0;
}
