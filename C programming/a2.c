#include<stdio.h>
int main()
{
    int a[10]={0};
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n!=0)
    {
        int r=n%10;
        a[r]++;
        n=n/10;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i]!=0  )
        {
            printf("%d occurs %d times\n",i,a[i]);
        }
    }
}