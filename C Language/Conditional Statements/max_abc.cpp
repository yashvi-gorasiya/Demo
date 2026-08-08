#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("Enter a,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		printf("%d is maximum",a);
	}
	else if(b>c)
	{
		printf("%d is maximum",b);
	}
	else
	{
		printf("%d is maximum",c);
	}
	return 0;
}
