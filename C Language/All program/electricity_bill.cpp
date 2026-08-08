#include<stdio.h>

int main()
{
	int unit;
	float bill;
	
	printf("Enter a electricity unit: ");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		bill = unit*0.5;
	}
	else if(unit<=150)
	{
		bill = (50*0.5) + ((unit-50)*0.75);
	}
	else if(unit<=250)
	{
		bill = (50*0.5) + (100 *0.75) + ((unit-150)*1.20);
	}
	
	bill += (0.2 * bill);
	
	printf("%f", bill);
	
	return 0;
	
}
