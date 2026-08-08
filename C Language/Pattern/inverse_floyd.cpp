#include<stdio.h>

int main()
{
    int i, j, num = 10;

    for(i = 4; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}
