#include<stdio.h>

int main()
{
    int i,j,k,num=2,flag;

    for(i=1;i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            while(1)
            {
                flag = 1;
                for(k=2; k<num; k++)
                {
                    if(num%k == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag==1)
                {
                    printf("%d ", num);
                    num++;
                    break;
                }
                num++;
            }
        }
        printf("\n");
    }
    return 0;
}
