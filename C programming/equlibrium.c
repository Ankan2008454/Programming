#include<stdio.h>
int main()
{
    printf("Enter no of terms of the array:");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int l=0;l<n;l++)
    {
        printf("Enter %d element:",(l+1));
        scanf("%d",&a[l]);
    }
    for(int i=0;i<n;i++)
    {
        int c=0;
        int d=0;
        for(int j=0;j<n;j++)
        {
            if(j>i)
            c=c+a[j];
            else if(j<i)
            d=d+a[j];
        }
        int s=(c+d);
        if(((s/2)==c)&&((s/2)==d))
        printf("Equilibrium Index is: %d",i);
    }
}