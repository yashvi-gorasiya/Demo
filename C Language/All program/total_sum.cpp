/*#include<stdio.h>

int main()
{
    int n, num, sum = 0;

    printf("How many numbers are enter:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = sum + num;
        
    }

    printf("\nTotal number of sum is %d", sum);

    return 0;
}*/

/*#include<stdio.h>

int main()
{
    int n, num, sum = 0;

    printf("Enter a number:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        sum = sum + num;
    }

    printf("Total sum = %d", sum);

    return 0;
}*/

#include <stdio.h>
int main()
{
	int num,count=0;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	while(num>0)
	{
		count+=num%10;
		num/=10;
	}
	printf("%d",count);
	return 0;
}


