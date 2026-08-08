#include<stdio.h>
int main()
{
	int choice=0,item;
	int bill=0;
	
	while(choice!=5)
	{
		printf("---Food Menu---\n");
		printf("1.Gujarati\n");
		printf("2.South\n");
		printf("3.Punjabi\n");
		printf("4.Rajasthani\n");
		printf("5.Print bill\n");
	
		printf("Enter a choice: ");
		scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("\n---Gujarati menu--\n");
		printf("1. Rotlo\tRs.40\n");
		printf("2. Sev tamatar\tRs.55\n");
		printf("3. Khichdi\tRs.45\n");
		
		printf("Enter a item number: ");
		scanf("%d",&item);
		if(item==1)
		{
			bill+=40;	
		}
		else if(item==2)
		{
			bill+=55;
		}
		else if (item==3)
		{
			bill+=45;
		}
		break;
	
		case 2:
		printf("\n---South menu--\n");
		printf("1. Dosa\tRs.30\n");
		printf("2. Idli\tRs.60\n");
		printf("3. Podi\tRs.55\n");
		
		printf("Enter a item number: ");
		scanf("%d",&item);
		if(item==1)
		{
			bill+=30;	
		}
		else if(item==2)
		{
			bill+=60;
		}
		else if (item==3)
		{
			bill+=55;
		}
		break;
	
	
		case 3:
		printf("\n---Punjabi menu--\n");
		printf("1. Paneer tikaa\tRs.120\n");
		printf("2. Butter-naan\tRs.150\n");
		printf("3. Green rice\tRs.90\n");
		
		printf("Enter a item number: ");
		scanf("%d",&item);
		if(item==1)
		{
			bill+=120;	
		}
		else if(item==2)
		{
			bill+=150;
		}
		else if (item==3)
		{
			bill+=90;
		}
		break;

	
		case 4:
		printf("\n---Rajasthani menu--\n");
		printf("1. Dal-batti\tRs.155\n");
		printf("2. Churma\tRs.80\n");
		printf("3. Ghevar\tRs.110\n");
		
		printf("Enter a item number: ");
		scanf("%d",&item);
		if(item==1)
		{
			bill+=155;	
		}
		else if(item==2)
		{
			bill+=80;
		}
		else if (item==3)
		{
			bill+=110;
		}
		break;
	
	
		case 5:
		printf("Total bill = %d",bill);
		break;
		
		default:
		printf("Invalid choice");
		}	
}
	return 0;
}
