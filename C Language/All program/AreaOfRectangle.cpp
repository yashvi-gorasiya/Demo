#include<stdio.h>
int main()
{
	int length,width,area;
	printf("Enter the length of reactangle:");
	scanf("%d",&length);
	
	printf("Enter the width of reactangle:");
	scanf("%d",&width);
	
	area=length*width;
	
	printf("Total area of rectangle is %d",area);
	return 0;
}
