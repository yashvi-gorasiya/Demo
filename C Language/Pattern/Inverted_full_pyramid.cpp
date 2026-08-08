#include <stdio.h>

int main() 
{
  int i,j;
  for (i=5;i>=1;i--)
  {
     for (j=1;j<=9;j++)
      {
       if(j>=6-i && j<=4+i)
      	    printf("*");
       else
       	    printf(" ");
       
      }
      printf("\n");
  }
  return 0;
}

