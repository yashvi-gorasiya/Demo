#include<stdio.h>
int main()
{
	int marks;
	char grade;
	
	printf("Enter marks:");
	scanf("%d",&marks);
	
	if(marks>90)
	{
		grade = 'A';
	}
	else if(marks>75)
	{
		grade = 'B';
	}
	else
	{
		grade = 'C';
	}
	
	switch(grade){
	
		case 'A':
			printf("Marks %d and Grade %c", marks,grade);
			break;
		
		case 'B':
			printf("Marks %d and Grade %c", marks,grade);
			break;
			
		case 'C':
			printf("Marks %d and Grade %c", marks,grade);
			break;	
	}	
	return 0;
}
