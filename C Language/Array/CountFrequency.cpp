#include<stdio.h>
int main()
{
    int a[3][3],b[100],i,j,k = 0,ctr,fr1[100];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter value of a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            b[k] = a[i][j];
            fr1[k] = -1;
            k++;
        }
    }
    for (i = 0; i < k; i++)
    {
        ctr = 1;
        for (j = i + 1; j < k; j++)
        {
            if (b[i] == b[j])
            {
                ctr++;
                fr1[j] = 0; 
            }
        }
        if (fr1[i] != 0)
        {
            fr1[i] = ctr;
        }
    }
    for (i = 0; i < k; i++)
    {
        if (fr1[i] != 0)
        {
            printf("%d occurs %d times\n", b[i], fr1[i]);
        }
	}
}
