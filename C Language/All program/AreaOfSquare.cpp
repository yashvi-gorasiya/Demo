#include<stdio.h>
int main()
{
	float side,area;
	printf("Enter the side of length:");
	scanf("%f",&side);
	
	area=side*side;
	
	printf("Total area of sqaure is %.2f",area);
	return 0;
}
