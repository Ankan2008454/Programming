#include<stdio.h>
int main()
{
   int n;
   printf("Enter value of n") ;
   scanf("%d",&n);
   for(int i=1;i<=(2*n-1);i++)
   {
      int c=4;
      for(int j=1;j<=(2*n-1);j++)
      {
        printf("%d",c);
        if(j<i)
        c--;
        if(j>((2*n-1-i)))
        c++;
      }
      printf("\n");
   }
}