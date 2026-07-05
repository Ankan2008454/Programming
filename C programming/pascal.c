#include<stdio.h>
int fact(int a)
{ int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    printf("Enter Number of rows: ");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        printf(" ");
        for(int k=0;k<=i;k++)
        {
            int fa=fact(i)/(fact(k)*fact(i-k));
            printf("%d ",fa);
        }
        for(int j=0;j<(n-i-1);j++)
        printf(" ");
    printf("\n");
    }
    

}