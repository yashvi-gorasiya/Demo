#include<stdio.h>
int main()
{
	int r;
	float area;
	printf("Enter the radius of circle:");
	scanf("%d",&r);
	
	area=3.14*r*r;
	
	printf("Total area of circle is %.2f",area);
	return 0;
}
